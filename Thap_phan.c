#include<stdio.h>

int main() {
    double x;
    int T;
    
    scanf("%d", &T);
    while (T--) {
        scanf("%lf", &x);
        printf("%.15lf\n", 1/x);
    }

    return 0;
}