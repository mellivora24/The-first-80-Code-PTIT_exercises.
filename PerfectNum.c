#include<stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a>b) {
		int tg = a;
		a=b;
		b=tg;
	}
	// 6 28 496 8128
	int perfectNum[4]={6, 28, 496, 8128};
	for (int i=0; i<=3; i++) {
		if (perfectNum[i] >=a && perfectNum[i] <=b) {
			printf("%d ", perfectNum[i]);
		}
	}
	
	return 0;
}