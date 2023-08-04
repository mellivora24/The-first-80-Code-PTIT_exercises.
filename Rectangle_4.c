#include<stdio.h>

int main() {

	int a, b;
	scanf("%d%d", &a, &b);

	for (int i=1; i<=a; i++) {
        int dem=0;
		for (int j=i; j<=b; j++) {
            printf("%d", j);
            dem++;
        }
        if (dem<b) {
            for (int i=1; i<=b-dem; i++) {
                printf("%d", b-i);
            }
        }
		printf("\n");
	}

	return 0;
}
/*      4-4     3-5
        1234   12345
        2343   23454
        3432   34543
        4321
*/