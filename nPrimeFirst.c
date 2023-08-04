#include<stdio.h>
#include<math.h>

int isPrime(int x) {
    if (x==2) {
        return 1;
    } else {
        for (int i=2; i<=sqrt(x); i++) {
            if (x%i==0) return 0;
        }
    }
    return 1;
}
int main() {

    int n, dem=0, testNum=2;
    scanf("%d", &n);

    while (dem<n) {
        if (isPrime(testNum)) {
            printf("%d\n", testNum);
            dem++;
        }
        testNum++;
    }

    return 0;
}