#include<stdio.h>

int main() {
	
	int a; //rong a, cao b
	scanf("%d", &a);
	
	for (int i=1; i<=a; i++) {
		for (int j=1; j<=a; j++) {
			printf("*");
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