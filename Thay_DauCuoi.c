// #include<stdio.h>
// #include<math.h>

// int main() {

//     int n, dem=1;
//     scanf("%d", &n);
// 	int tempN = n;
//     while ((tempN/10)!=0) {
//     	dem++;
//     	tempN /= 10;
// 	}
// 	int fir = n/(pow(10, dem-1));
// 	int las = n%10;
// 	int mid = (n/10)%(int)(pow(10, dem-2));
// 	// 9800 -> 0809
// 	int newNum = las*(pow(10, dem-1)) + mid*10 + fir;
	
// 	printf("%d", newNum);
	
// 	return 0;
// }
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int thuanNghich(int num) {
    char number[20];
    sprintf(number, "%d", num);

    int length = strlen(number);
    for (int i = 0; i < length / 2; i++)
        if (number[i] != number[length - i - 1]) return 0;

    return 1;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i=a; i<=b; i++) {
		if (thuanNghich(i)) printf("%d, ", i);
	}
    return 0;
}
