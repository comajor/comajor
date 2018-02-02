#include <stdio.h>
int main(){
	char n,i;
	char a[100];
	gets(a);
	i=1;
	while(a[i]!=0){
		i++;
	}
	n=i-1;
	for(i=n;i>=0;i--){
		putchar(a[i]);
	}
	return 0;
} 
