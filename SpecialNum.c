#include<stdio.h>

int ok(long long x) {
	while (x>0) {
		if ((x%10)%2!=0 && (x%10)!=0) {
			return 0;
		}
		x/=10;
	}
	return 1;
}
int main() {
	
	int T;
	scanf("%d", &T);
	
	while (T--) {
		long long n;
		scanf("%lld", &n);
		if (ok(n)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}