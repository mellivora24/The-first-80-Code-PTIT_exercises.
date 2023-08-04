#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int isPrime(char x) {
    if (x=='2'||x=='3'||x=='5'||x=='7') return 1;
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

        //num[lenOfNum] = '\0';
        int temLen = strlen(num)-1;
        int lenOfNum = strlen(num);
        int kt = 1;
        for (int i=0; i<=lenOfNum; i++) {
            rev[i] = num[temLen];
            if (num[temLen]>='0' && num[temLen]<='9')
                if (!isPrime(rev[i])) kt=0;
            temLen--;
        }
        // printf("%d\n", kt);
        if (kt && !strcmp(num, rev)) printf("YES\n");
        else printf("NO\n");
        // printf("---------------\n");
    }
    return 0;
}