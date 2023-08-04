#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long

double cheo(int x, int y, int z, int t) {
    return sqrt(pow(x-z, 2)+pow(y-t, 2));
}
int main() {

    int T; scanf("%d", &T);
    while (T--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        double A = cheo(a, b, c, d);
        double B = cheo(a, d, c, b);
        if (A == B) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}