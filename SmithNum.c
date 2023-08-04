#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long

int sum(ll n) {
    int sum = 0;
    while (n) {
        sum += n%10;
        n/=10;
    }
    return sum;
}
int sumPrime(ll n) {
    int sumP = 0;
    for (int i=2; i<=sqrt(n); i++) {
		while (n%i==0) {
			n/=i;
            if (i>9) sumP += sum(i);
            else sumP+=i;
            //printf("%d ", i);
		}
	}
	if (n!=1) sumP += sum(n);
    return sumP;
}

int main() {

    ll n;
    scanf("%lld", &n);

    if (sum(n) == sumPrime(n)) printf("YES");
    else printf("NO");

    return 0;
}