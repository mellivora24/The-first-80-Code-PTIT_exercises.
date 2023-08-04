#include<stdio.h>
#include<math.h>

int main() {

    long long A[45];
    for (int i=0; i<=40; i++) {
        long long item = (1/sqrt(5))*(pow((1+sqrt(5))/2, i) - pow((1-sqrt(5))/2, i));
        A[i] = item;
    }

    long long n; scanf("%lld", &n);

    for (int i=0; i<=40; i++) {
        if (A[i]==n) {
            printf("1");
            return 0;
        }
    }
    printf("0");

    return 0;
}