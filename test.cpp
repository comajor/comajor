#include <stdio.h>
int main(){
	int n,m=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2){
			n=(3*n+1)/2;
		} else {
			n/=2;
		}
		m++;
	}
	printf("%d",m);
	return 0;
} 
