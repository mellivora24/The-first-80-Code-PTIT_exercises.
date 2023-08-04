#include<stdio.h>

int isStrong(int n) {
	
	long long sumOfNum=0;
	int tempN = n;
	
	while (n>0) {
		int num = n%10;
		int factOfNum = 1;
		for (int i=1; i<=num; ++i) {
			factOfNum*=i;
		}
		sumOfNum+=factOfNum;
		n/=10;
	}
	
	return ((tempN==sumOfNum)?1:0);
}
int main() {
	int T;
	scanf("%d", &T);
	
	for (int i=1; i<=T; i++) {
		if(isStrong(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}