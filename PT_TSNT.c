#include<stdio.h>

int main() {
	
	int T;
	scanf("%d", &T);
	
	while (T--) {
		int n;
		scanf("%d", &n);
		for (int i=2; i<=n; i++) {
			while ((n%i)==0) {
				printf("%d ", i);
				n/=i;
			}
		}
		printf("\n");
	}
	
	return 0;
}