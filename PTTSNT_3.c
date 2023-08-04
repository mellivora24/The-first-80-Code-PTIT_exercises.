#include<stdio.h>
#include<math.h>

void dePrime(int n) {
	for (int i=2; i<=sqrt(n); i++) {
		int dem = 0;
		while (n%i==0) {
			dem++;
			n/=i;
		}
		if (dem!=0) printf(" %d(%d)", i, dem);
	}
	if (n!=1)
		printf(" %d(1)", n);	
	printf("\n");
}

int main() {
	
	int T; scanf("%d", &T);
	int tempT = T;
	
	while (T--) {
		int n; scanf("%d", &n);
		printf("Test %d:", tempT-T);
		dePrime(n);
	}
	return 0;
}