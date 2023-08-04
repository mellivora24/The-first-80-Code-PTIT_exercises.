#include<stdio.h>
#include<math.h>

int isUp(int x) {
	while (x) {
		if ((x%10)<((x/10)%10)) return 0;
		x/=10;
	}
	return 1;
}
int main() {
	
	int T;
	scanf("%d", &T);
	
	while (T--) {
		int n;
		scanf("%d", &n);

		int endNum = pow(10, n);
		int startNum = 0;

		while (n>=0) {
			startNum += pow(10, n-1);
			n--;
		}

		for (int i=startNum; i<=endNum; i++) {
			if (isUp(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	
	return 0;
}