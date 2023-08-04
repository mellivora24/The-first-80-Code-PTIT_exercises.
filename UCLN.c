#include<stdio.h>

//Giai thuat EUCLID
int UCLN(int a, int b) {
	int r = a%b;
	if (!r) {
		return b;
	} else {
		return UCLN(b, r);
	}
}
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b, ucln;
		scanf("%d%d", &a, &b);
		if (a>=b) {
			ucln = UCLN(a, b);
		} else {
			ucln = UCLN(b, a);
		}
		printf("%d\n", ucln);
	}
	return 0;
}