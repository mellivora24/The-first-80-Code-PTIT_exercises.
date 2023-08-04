#include<stdio.h>

int main() {
	
	int a, b; //rong a, cao b
	scanf("%d%d", &a, &b);
	
	for (int i=1; i<=b; i++) {
		for (int j=1; j<=a; j++) {
			if (i==1 || j==1 || i==b || j==a) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
/*
	****** - i (a)
	*
	*
	|
	j (b)
*/