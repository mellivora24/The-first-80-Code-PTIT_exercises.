#include<stdio.h>
#include<math.h>

int main() {
	
	int m, n, dem=0, x=0, delta=0;
	scanf("%d%d", &m, &n);
	
	int a = (int)sqrt(m);
	int b = (int)sqrt(n); b = b*b;
	
	if ((a*a)<m) {
		x = (a+1)*(a+1);
		delta = x-a*a;
	} else {
		x = a*a;
		delta = x-(a-1)*(a-1);
	}
	while (x<=b) {
		dem++;
		x += (delta+2);
		delta += 2;
	}
	
	printf("%d\n", dem);
	
	if ((a*a)<m) {
		x = (a+1)*(a+1);
		delta = x-a*a;
	} else {
		x = a*a;
		delta = x-(a-1)*(a-1);
	}
	printf("%d\n", x);
	while (x<b) {
		printf("%d\n", x+delta+2);
		x += (delta+2);
		delta += 2;
	}
	return 0;
}
// 1 4 9 16 25 36 49 64 81 100
//  3 5 7  9 11 13 15 17 19