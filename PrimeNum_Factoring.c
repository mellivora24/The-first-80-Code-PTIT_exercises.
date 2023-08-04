#include<stdio.h>
#include<math.h>

int isPrime(int num) {
    int stopPoint = (int)sqrt(num);
    for (int i=2; i<=stopPoint; i++) {
        if (num%i==0) return 0;
    }
    return num>1;
}
void primeFactoring(int num) {
    for (int i=2; i<=num; i++) {
        if (num==1) {
            i = num;
        } else if (isPrime(i)) {
            int count = 0;
            while (num%i==0) {
                count++;
                num/=i;
            }
            if (count>0) {
                printf("%d^%d", i, count);
                if (num>1) printf(" * ");
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int num;
        scanf("%d", &num);
        if (num==1) {
            printf("1 = 1^1");
        } else {
            printf("%d = ", num);
            primeFactoring(num);
        }
        printf("\n");
    }

    return 0;
}