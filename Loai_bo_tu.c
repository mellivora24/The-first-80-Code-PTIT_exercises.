#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[105];
	char b[100];
    char wordBreak[100][20];
    gets(s);
	gets(b);
    //Break word in string s:
    int word=0;
    char* token = strtok(s, " ");
    while (token!=NULL) {
        strcpy(wordBreak[word++], token);
        token = strtok(NULL, " ");
    }
    //Browse the word of the wordBreak array:
    for (int i=0; i<word; i++)
        if (strcmp(wordBreak[i], b)) printf("%s ", wordBreak[i]);
}