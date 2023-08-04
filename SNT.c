#include<stdio.h>
#include<math.h>

int main() {

	int T;
	scanf("%d", &T);

	while (T--) {
		int x;
		scanf("%d", &x);
		if (x<2) {
			printf("NO\n");
			continue;
		}
		int ok = 0;
		for (int i=2; i<=sqrt(x); i++) {
			if ((x%i)==0) {
				printf("NO\n");
				ok = 1;
				break;
			}
		}
		if (!ok) printf("YES\n");
	}

	return 0;
}