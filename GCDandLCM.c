#include<stdio.h>

int GCD(int a, int b) {
    int r=a%b;
    if (!r) {
        return b;
    } else {
        return GCD(b, r);
    }
}
int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    if (a>=b) {
        int gcd = GCD(a, b);
        printf("%d\n%lld", gcd, ((long long)a*b)/gcd);
    } else {
        int gcd = GCD(b, a);
        printf("%d\n%lld", gcd, ((long long)a*b)/gcd);
    }

    return 0;
}