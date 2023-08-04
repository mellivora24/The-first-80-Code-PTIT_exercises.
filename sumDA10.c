#include<stdio.h>

int main() {
	
	int T;
	scanf("%d", &T);
	
	while (T--) {
		int n, sum=0;
		scanf("%d", &n);
		
		while (n/10) {
			sum+=n%10;
			n/=10;
		}
		sum+=n%10;
		if (sum%10==0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}