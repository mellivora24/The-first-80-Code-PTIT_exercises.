#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        char cutName[10][20];
        char name[55];
        gets(name);

        int i=0;
        char* token = strtok(name, " ");
        while (token != NULL) {
            strcpy(cutName[i], token);
            token = strtok(NULL, " ");
            i++;
        }
        for (int index=1; index<i; index++) {
            if (cutName[index][0]>='a' && cutName[index][0]<='z')
                cutName[index][0] -= 32;
            for (int j=1; j<strlen(cutName[index]); j++)
                if (cutName[index][j]>='A' && cutName[index][j]<='Z')
                    cutName[index][j] += 32;
            printf("%s", cutName[index]);
            if (index<i-1) printf(" ");
        }
        for (int j=0; j<strlen(cutName[0]); j++)
            if (cutName[0][j]>='a' && cutName[0][j]<='z')
                cutName[0][j] -= 32;
        printf(", %s", cutName[0]);
        if (t>=1) printf("\n");
    }
    return 0;
}