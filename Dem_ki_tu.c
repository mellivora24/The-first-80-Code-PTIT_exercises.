#include <stdio.h>
#include <string.h>

int main() {
    char s[305];
    gets(s);
    int a=0, b=0, c=0;
    int lenOfS = strlen(s);

    for (int i=0; i<lenOfS; i++) {
        if (((int)s[i]>=65 && (int)s[i]<=90) || ((int)s[i]>=97 && (int)s[i]<=122))
            a++;
        else if ((int)s[i]>=48 && (int)s[i]<=57) b++;
        else c++;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}