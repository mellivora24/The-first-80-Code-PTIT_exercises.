#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[10005];
    fgets(s, 10000, stdin);
    printf("%d", strlen(s)-1);
    return 0;
}