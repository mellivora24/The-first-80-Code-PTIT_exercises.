#include<stdio.h>

int main() {
	
	int n;
	long long tich = 1;
	scanf("%d", &n);
	
	while ((n/10)!=0) {
		tich *= (n%10);
		n /= 10;
	}
	printf("%lld", tich);
	
	return 0;
}