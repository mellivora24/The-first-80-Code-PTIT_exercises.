#include<stdio.h>

int GCD(int a, int b) {
    int r=a%b;
    if (!r) {
        return b;
    } else {
        return GCD(b, r);
    }
}
int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    while (a<b) {
        for (int i=a; i<=b; i++) {
            if(i!=a && GCD(a, i)==1) {
                printf("(%d,%d)\n", a, i);
            }
        }
        a++;
    }
    return 0;
}