#include<stdio.h>

int main() {
	// a: 97 -> z: 122
	int a, b;
	scanf("%d%d", &a, &b);


	for (int i=0; i<a; i++) {

		int max=a, j=1;
		if (max<b) max=b;

		while (j<=i && j<=b) {
			printf("%c", 96+max);
			max--;
			j++;
		}
		while (j<=b) {
			printf("%c", 96+max);
			j++;
		}
		printf("\n");
	}

	return 0;
}
/*int main() {
	// A->650
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	for (int i=0; i<a; i++) {
		int j=0;
		while (j<b && (i+j)<b) {
			printf("%c", 65+j+i);
			j++;
		}
		if (i<b) {
			int x=i;
			while (j<b) {
				printf("%c", 65+x-1);
				j++;
				x--;
			}
		} else {
			int x=b;
			while (x--) {
				printf("%c", 65+x);
			}
		}
		printf("\n");
	}
	
	return 0;
}*/
/*int main() {
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	for (int i=0; i<a; i++) {
		for (int j=0; j<b; j++) {
			if (j<=b-i-1) {
				printf("%c", 64+j+i);
			} else {
				printf("%c", 64+b-1);
			}
		}
		printf("\n");
	}
	
	return 0;
}*/
// int main() {
	
// 	int a,b;
// 	scanf("%d%d", &a, &b);
	
// 	for (int i=0; i<a; i++) {
// 		int tempB=b;
// 		if ((a-i)>b) {
// 			while (tempB--) {
// 				printf("%c", 64+b);
// 			}
// 		} else {
// 			int tempI=i;
// 			while (tempB--) {
// 				if (a-tempI<=b) {
// 					printf("%c", 64+a-tempI);
// 					tempI--;
// 				} else {
// 					printf("%c", 64+a-tempI-1);
// 				}
// 			}
// 		}
// 		printf("\n");
// 	}
	
// 	return 0;
// }