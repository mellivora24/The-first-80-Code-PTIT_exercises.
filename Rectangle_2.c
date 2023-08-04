#include<stdio.h>

int main() {

	int a, b;
	scanf("%d%d", &a, &b);

	for (int i=1; i<=a; i++) {
		printf("%d", i);
		for (int j=1; j<b; j++) {
			if ((i+j)<=b) {
				printf("%d", i+j);
			} else {
				printf("%d", b-j);
			}
		}
		printf("\n");
	}

	return 0;
}
/*
		1234		12345		1234
		2341		23451		2341
		3421		34521		3421
		4321					4321
		5321
		6321
*/