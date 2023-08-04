#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[105];
    char wordBreak[100][20];
    gets(s);
    //Count word in string:
    int word=0;
    char* token = strtok(s, " ");
    while (token!=NULL) {
        strcpy(wordBreak[word++], token);
        token = strtok(NULL, " ");
    }
    //Browse the word of the wordBreak array:
    for (int i=0; i<word; i++)
        if (strcmp(wordBreak[i], "EPT")==1)
            for (int j=i+1; j<word; j++)
                if (strcmp(wordBreak[j], wordBreak[i])==0)
                    strcpy(wordBreak[j], "EPT");
    for (int i=0; i<word; i++)
        if (strcmp(wordBreak[i], "EPT")) printf("%s ", wordBreak[i]);
}