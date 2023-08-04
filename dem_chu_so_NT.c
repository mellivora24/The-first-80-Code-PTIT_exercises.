#include<stdio.h>
#define ll long long

int checkPrime(int n) {
    if (n==2 || n==3|| n==5|| n==7) return 1;
    else return 0;
}

int main() {
    
    ll n; scanf("%lld", &n);
    ll tempN = n;

    int len = 0;
    while (tempN) {
        len++;
        tempN/=10;
    }

    int tempLen = len;
    int array[len+5];
    while (tempLen--) {
        array[tempLen] = n%10;
        n/=10;
    }

    for (int i=0; i<len; i++)
        if (!checkPrime(array[i])) array[i] = -1;
    for (int i=0; i<len; i++)
       if (array[i] != -1) {
            int count = 1;
            printf("%d ", array[i]);
            for (int j=i+1; j<len-1; j++)
                if (array[j]==array[i]) {
                    count++;
                    array[j] = -1;
                }
            printf("%d\n", count);
       }
    
    return 0;
}