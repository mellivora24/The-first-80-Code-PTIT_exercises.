#include<stdio.h>

int sumNum(int x) {
	int sum=0;
	while(x>0) {
		sum+=x%10;
		x/=10;
	}
	return sum;
}
int main() {
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	if(sumNum(a)<=sumNum(b)) {
		printf("%d %d", a, b);
	} else {
		printf("%d %d", b, a);
	}
	
	
	return 0;
}