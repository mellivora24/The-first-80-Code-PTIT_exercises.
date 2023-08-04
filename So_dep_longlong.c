#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check(char c) {
    if ((c-'0')%2==0) return 1;
    else return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        char num[505];
        char rev[505];
        gets(num);

        int lenOfNum = strlen(num);
        //num[lenOfNum] = '\0';
        int temLen = lenOfNum-1;
        int kt = 1;
        for (int i=0; i<=lenOfNum; i++) {
            rev[i] = num[temLen];
            if (!check(num[temLen])) kt=0;
            temLen--;
        }
        if (kt && !strcmp(num, rev)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}