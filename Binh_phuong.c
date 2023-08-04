#include<stdio.h>

int main() {
    long long x;
    int T;
    
    scanf("%d", &T);
    for (int i= 1; i<= T; i++) {
        scanf("%lld", &x);
        printf("%lld\n", x*x);
    }

    return 0;
}