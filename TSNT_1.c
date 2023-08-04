#include<stdio.h>
#include<math.h>

int extract(int x) {
	int tempX=x;
	for (int i=2; i<=sqrt(x); i++) {
		int dem=0;
		while ((tempX%i)==0) {
			dem++;
			tempX/=i;
		}
		if (dem!=0) printf("%d(%d) ", i, dem);
	}
}
int main() {
	
	int T, i=1;
	scanf("%d", &T);
	
	while (i<=T) {
		int n;
		scanf("%d", &n);
		printf("Test %d: ", i);
		extract(n);
		printf("\n");
		i++;
	}
	
	return 0;
}