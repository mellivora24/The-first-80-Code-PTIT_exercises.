#include<stdio.h>
#include<math.h>

int main(){
	
	int T=0;
	scanf("%d", &T);
	
	while(T--){
		int a;
		scanf("%d", &a);
		if ((float)sqrt(a) - (int)sqrt(a)*1.0 == 0){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	
	return 0;
}