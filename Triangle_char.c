#include<stdio.h>

/*int main() {
	
	int a;
	scanf("%d", &a);
	
	for (int i=0; i<a; i++) {
		int j=2*i;
		while (j<=(a-1)*2) {
			printf("%c", 65+j);
			j+=2;
		}
		printf("\n");
	}
	
	return 0;
}*/
int main() {
	
	int a;
	scanf("%d", &a);
	a++;
	
	for (int i=1; i<=a; i++) {
		for (int j=a-i; j<=2*(a-i)-1; j++) {
			printf("%c", 63+j);
		}
		printf("\n");
	}
	
	return 0;
}