#include<stdio.h>

int main() {
	
	int n, val=1, lastVal=0;
	scanf("%d", &n);
	
	if (n==1) {
		printf("0");
	} else if (n==2) {
		printf("%d %d", lastVal, val);
	} else if (n>2) {
		int tempN = n-2;
		printf("%d %d ", lastVal, val);
		while (tempN--) {
			printf("%d ", val+lastVal);
			int tg=val;
			val+=lastVal;
			lastVal=tg;
		}
	}
	
	return 0;
}
// l v
// 0 1 1 2 3 5 8 13 21 34
// 1 2 3 4 5 6 7 8  9  10