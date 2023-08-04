#include<stdio.h>
#include<math.h>

int main(){
	
	double a, b, c, delta=0, x1=0, x2=0;
	scanf("%lf%lf%lf", &a, &b, &c);

	delta = b*b - 4*a*c;
	
	if (delta>0){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("%.2lf %.2lf", x1, x2);
	}else if (delta==0){
		x1 = -b/(2*a);
		printf("%.2lf", x1);
	}else {
		printf("NO");
	}
	return 0;
} 