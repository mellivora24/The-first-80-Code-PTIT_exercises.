#include<stdio.h>
#include<math.h>

int max(int a, int b) {
    if (a>b) return a;
    return b;
}

int tn(int x) {
    int check=0, tempX = x;
    while (x) {
        check = check*10 + x%10;
        x/=10;
    }
    if (check==tempX) {
        return 1;
    } else return 0;
}

void sang(int left, int right) {
    int arr[right-left+1];
    for (int i=0; i<= right-left+1; i++) arr[i] = 1;
    for (int i=2; i<=sqrt(right); i++) {
        for (int j=max(i*i, (left+i-1)/i*i); j<=right; j+=i) {
            arr[j-left] = 0;
        }
    }
    int dem=0;
    for (int i=max(left, 2); i<=right; i++) {
        if (arr[i-left]) if (tn(i)) {
            if (dem%10==0) printf("\n");
            printf("%d ", i);
            dem++;
        }
    }
}

int main() {
    int T; scanf("%d", &T);
    while (T--) {
        int a, b; scanf("%d%d", &a, &b);
        sang(a, b);
        printf("\n\n");
    }
    return 0;
}