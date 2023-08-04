#include<stdio.h>
#include<math.h>

int main() {

    int n, dem=1;
    scanf("%d", &n);
	int tempN = n;
    while ((tempN/10)!=0) {
    	dem++;
    	tempN /= 10;
	}
	int fir = n/(pow(10, dem-1));
	int bt = (n-fir*pow(10, dem-1))/10;
	int las = n%10;
	
	if (las != 0) {
		printf("%d", las);
	}
	printf("%d", bt);
	printf("%d", fir);
	// printf("%d", las);
	
	return 0;
}