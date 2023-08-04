#include<stdio.h>

int main() {
	
	int T;
	scanf("%d", &T);
	
	while (T--) {
		
	    int n, chan=0, le=0;
	    scanf("%d", &n);
	    
	    while (n/10) {
	    	if (((n%10)%2)==0) {
	    		chan++;
			} else {
				le++;
			}
			n /=10;
		}
		if (((n%10)%2)==0) {
	    	chan++;
		} else {
			le++;
		}
		
		printf("%d %d\n", le, chan);
	}
	return 0;
}