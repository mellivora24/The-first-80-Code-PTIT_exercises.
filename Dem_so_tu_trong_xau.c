#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar();

    while (T--) {
        int dem=1;
        char s[205];
        gets(s);
        
        int lenOfS = strlen(s);
        for (int i=0; i<lenOfS-1; i++) {
            if (s[i] == ' ' && s[i+1] != ' ') dem++;
        }
        printf("%d\n", dem);
    }
}