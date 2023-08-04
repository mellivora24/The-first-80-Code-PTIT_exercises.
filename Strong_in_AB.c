#include<stdio.h>

int gt(int num) {
    int gt=1;
    for (int count=1; count<=num; count++)
        gt *= count;
    return gt;
}
int check(int x, int *arr) {
    int sumgt = 0, tempX = x;
    while (x) {
        sumgt += arr[x%10];
        x/=10;
    }
    return tempX==sumgt;
}

int main() {
    int arr[9];
    for (int i=0; i<=9; i++) {
        arr[i] = gt(i);
    }

    int a, b; scanf("%d%d", &a, &b);
    if (a>b) {
        int tempA = a;
        a=b; b=tempA;
    }

    for (int i=a; i<=b; i++) {
        if (check(i, arr)) printf("%d ", i);
    }
    return 0;
}