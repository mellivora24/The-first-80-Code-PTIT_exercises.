#include<stdio.h>

int check(long long n) {
    long long reN = 0, tempN = n;
    while (n) {
        reN = reN*10 + n%10;
        n/=10;
    }
    return (reN==tempN);
}
int all_Le(long long n) {
    int sumOfN = 0;
    while (n) {
        if (!(n%2)) return 0;
        sumOfN += n%10;
        n/=10;
    }
    if (!(sumOfN%2)) return 0;
    else return 1;
}

int main() {
    int T; scanf("%d", &T);
    while (T--) {
        long long n;
        scanf("%lld", &n);
        if (check(n)&&all_Le(n)) printf("YES\n");
        else printf("NO");
    }
    return 0;
}