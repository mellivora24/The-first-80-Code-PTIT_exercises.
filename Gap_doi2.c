#include<stdio.h>

int main() {
	
	int T, x;

	scanf("%d", &T);

	for (int i = 1; i<=T; i++) {
		scanf("%d", &x);
		printf("%d\n", x*2);
	}

	return 0;
}
