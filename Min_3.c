#include<stdio.h>

int main() {
	
	int min, A[3];
	scanf("%d%d%d", &A[0], &A[1], &A[2]);
	
	min = A[0];
	for (int i=0; i<3; i++) {
		if (A[i] < min) min = A[i];
	}
	printf("%d", min);
	
	return 0;
}
