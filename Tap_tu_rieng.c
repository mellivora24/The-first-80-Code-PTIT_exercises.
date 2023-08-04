#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    char s1[105]; char arrayS1[100][20];
    char s2[105]; char arrayS2[100][20];
    gets(s1);
    gets(s2);

    char* token_s1 = strtok(s1, " ");
    char* token_s2 = strtok(s2, " ");
    int i=0;
    while (token_s1 != NULL) {
        strcpy(arrayS1[i], token_s1);
        token_s1 = strtok(NULL, " ");
        i++;
    }
    int j=0;
    while (token_s2 != NULL) {
        strcpy(arrayS2[j], token_s2);
        token_s2 = strtok(NULL, " ");
        j++;
    }



    return 0;
}