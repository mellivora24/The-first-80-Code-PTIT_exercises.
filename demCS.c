#include<stdio.h>

int main() {
	
	int n, dem=1;
    scanf("%d", &n);
    while ((n/10)!=0) {
    	dem++;
    	n /= 10;
	}
	printf("%d", dem);
	return 0;
}