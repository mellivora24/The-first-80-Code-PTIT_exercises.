#include<stdio.h>

int main() {
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	if (b==0) {
		printf("%d", 0);
	}else {
		printf("%d\n%d\n%lld\n%d\n%d\n%.2f", a+b, a-b, (long long)a*b, a/b, a%b, (float)a/b);
	}
	
	return 0;
}
