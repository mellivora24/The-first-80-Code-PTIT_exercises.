#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct phanSo {
    int tu;
    int mau;
};
int UCLN(int a, int b) {
    if (a<b) {
        int tg=a;
        a=b;
        b=tg;
    }
    int r = a%b;
    if (!r) return b;
    else return UCLN(b, r);
}
int BCNN(int a, int b) {
    return (a/UCLN(a, b))*b;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i=1; i<=t; i++) {
        //Nhap
        struct phanSo p;
        struct phanSo q;
        scanf("%d%d%d%d", &p.tu, &p.mau, &q.tu, &q.mau);
        //Rut gon
        int UCLN_P = UCLN(p.tu, p.mau);
        int UCLN_Q = UCLN(q.tu, q.mau);
        p.tu/=UCLN_P;
        p.mau/=UCLN_P;
        q.tu/=UCLN_Q;
        q.mau/=UCLN_Q;
        //Quy dong
        int MSC = BCNN(p.mau, q.mau);
        printf("Case #%d:\n", i);
        if (p.tu!=p.mau) printf("%d/%d ", (MSC/p.mau)*p.tu, MSC);
        else printf("%d/%d ", MSC, MSC);
        if (q.tu!=q.mau) printf("%d/%d\n", (MSC/q.mau)*q.tu, MSC);
        else printf("%d/%d\n", MSC, MSC);
        //Tong
        printf("%d/%d\n", (MSC/p.mau)*p.tu+(MSC/q.mau)*q.tu, MSC);
        //Thuong
        int UCLN_C = UCLN((MSC/p.mau)*p.tu, (MSC/q.mau)*q.tu);
        printf("%d/%d\n", (MSC/p.mau)*p.tu/UCLN_C, (MSC/q.mau)*q.tu/UCLN_C);
    }
    return 0;
}