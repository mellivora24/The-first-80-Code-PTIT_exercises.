#include<stdio.h>

int fact(int x) {
	if (x==1||x==0) {
		return 1;
	} else {
		return fact(x-1)*x;
	}
}
int main() {
	
	int n;
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++) {
		for (int j=0; j<i-1; j++) {
			int a = fact(i-1)/(fact(j)*fact(i-j-1));
			printf("%d ", a);
		}
		printf("1 ");
		printf("\n");
	}
	
	return 0;
}