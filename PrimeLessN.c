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

    int n;
    scanf("%d", &n);

    for (int i=2; i<=n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}