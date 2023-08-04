#include<stdio.h>
#include<math.h>
int upNum(int num) {
	
}

int main() {
	
	int T;
	scanf("%d", &T);

	while (T--) {
		int n;
		scanf("%d", &n);
		//Neu n la 1:
		if (n==1) {
			for (int i=1; i<=9; i++) printf("%d ", i);
		} else { //Neu n lon hon 1:
			int endNum = pow(10, n);
			int startNum = 0;
			while (n>=0) {
				startNum += pow(10, n-1);
				n--;
			}
			// printf("%d ", startNum);
			// printf("%d", endNum-1);

			for (int i=startNum; i<=endNum; i++) {
				if (upNum(i)) printf("%d ", i);
			}
		}
		printf("\n");
	}
	
	return 0;
}
