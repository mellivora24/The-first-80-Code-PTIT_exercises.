#include<stdio.h>

int main() {

    int T; scanf("%d", &T);

    while (T--) {
        int dem = 0;
        int n; scanf("%d", &n);

        for (int i = 1; i*i <= n; i++) {
            if (n%i==0) {
                if (i%2==0) dem++;
                int j = n/i;
                if (j!=i) {
                    if (j%2==0) dem++;
                }
            }
        }

        printf("%d\n", dem);

    }
    return 0;
}