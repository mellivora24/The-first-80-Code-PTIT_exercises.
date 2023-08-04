#include<stdio.h>
#include<math.h>

int main() {
	
	// Sn = (n(U1 + Un))/2;
	int a, b, Sn=0;
	scanf("%d%d", &a, &b);
	
	Sn = ((abs(a-b)+1)*(a+b))/2;
	
	printf("%d", Sn);
	
	return 0;
}