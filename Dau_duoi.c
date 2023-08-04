#include<stdio.h>

int main(){
	
	int T;
	scanf("%d", &T);
	while (T--){
		int n;
		scanf("%d", &n);
		int ok = n%10;
		while ((n/10)!=0){
			n/=10;
		}
		if (n==ok){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	
	return 0;
}