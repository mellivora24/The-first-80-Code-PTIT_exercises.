#include<stdio.h>

int main() {

	int a, b;
	scanf("%d%d", &a, &b);

	for (int i=1; i<=a; i++) {
		for (int j=0; j<b; j++) {
			if ((i-j)>=1) {
				printf("%d", i-j);
			}
		}
		int dem=2;
		for (int j=1; j<=b-i; j++) {
			printf("%d", dem++);
		}
		printf("\n");
	}

	return 0;
}
// int main() {

// 	int a, b;
// 	scanf("%d%d", &a, &b);
	
// 	int max=a;
// 	if (max<b) max=b;
// 	for (int i=0; i<a; i++) {
// 		int j=0;
// 		while ((max-i-j)>0 && j<b) {
// 			printf("%d", max-i-j);
// 			j++;
// 		}
// 		if ((max-i-j)==0) {
// 			int x=2;
// 			while (j<b) {
// 				printf("%d", x++);
// 				j++;
// 			}
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }