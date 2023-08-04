#include<stdio.h>
#include<math.h>

int isPrime(int num) {
    for (int i=2; i<=sqrt(num); i++) {
        if (num%i==0) return 0;
    }
    return num>1;
}
int allPrime(int num) {
    while (num) {
        int ch = num%10;
        if (ch!=2&&ch!=3&&ch!=5&&ch!=7) {
            return 0;
        }
        num/=10;
    }
    return 1;
}

int main() {

    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b, count=0;
        scanf("%d%d", &a, &b);

        for (int i=a; i<=b; i++) {
            if (isPrime(i)&&allPrime(i)) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}