#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

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
        if (num[0] != '8' || num[temLen] != '8') {
            printf("NO\n");
        } else {
            int sum = 0;
            for (int i=0; i<=lenOfNum; i++) {
                rev[i] = num[temLen];
                if (rev[i]>'0' && rev[i]<'9') sum += (rev[i]-'0');
                temLen--;
            }
            if (sum%10==0 && !strcmp(num, rev)) printf("YES\n");
            else printf("NO\n");
            // printf("SUM test: %d\n", sum);
        }
        // printf("---------------\n");
    }
    return 0;
}