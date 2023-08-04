#include<stdio.h>
#include<math.h>

int div(int n) {
    int dem = 0;

    for (int i=1; i<=sqrt(n); i++) {
        if (n%i==0) {
            printf("Uoc cua n la: %d\n", i);
            if (i%2==0) dem++;
        }
        if (i!=(n/i) && (n%(n/i)==0)) {
            printf("Uoc cua n la: %d\n", n/i);
            if ((n/i)%2==0) dem++;
        }
    }

    return dem;
}

int main() {
    
    int T; scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", div(n));
    }
    return 0;
}