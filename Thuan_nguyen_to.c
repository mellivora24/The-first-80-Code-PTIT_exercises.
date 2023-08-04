#include<stdio.h>
#include<math.h>

int isPrime(int x) {
    int breakPoint = sqrt(x);
    for (int i=2; i<=breakPoint; i++)
        if (x%i==0) return 0;
    return x>1;
}
int sum(int n) {
    int sum=0;
    while (n) {
        if (isPrime(n%10)) sum+= n%10;
        else return 0;
        n/=10;
    }
    return sum;
}
int main() {
    int T; scanf("%d", &T);
    while (T--) {
        long long a, b; scanf("%lld%lld", &a, &b);
        int dem=0;
        for (int i=a; i<=b; i++) {
            if (isPrime(i) && isPrime(sum(i))) dem++;
        }
        printf("%d\n", dem);
    }
    return 0;
}