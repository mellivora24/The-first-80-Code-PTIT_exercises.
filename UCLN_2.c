#include<stdio.h>

int UCLN(int a, int b) {
    if (a<b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int r = a%b;
    if (!r) return b;
    return UCLN(b, r);
}

int main() {
    int T; scanf("%d", &T);
    while (T--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (UCLN(a, b)==UCLN(c, d)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}