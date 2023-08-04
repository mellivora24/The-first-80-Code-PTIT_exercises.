#include<stdio.h>

int main() {

	int a, b;
	scanf("%d%d", &a, &b); // a-> hang, b -> cot
	
	for (int i=0; i<a; i++) {
		for (int j=1; j<=b+i; j++) {
			if (j>i) {
				if (j==i+1 || j==b+i || i==0 || i==a-1) {
					printf("*");
				} else {
					printf(".");
				}
			} else {
				printf("~");
			}
		}
		printf("\n");
	}
	
	return 0;
}
/*
		 *****	--> b
	|	~ *...*
	a	~~ *****
*/