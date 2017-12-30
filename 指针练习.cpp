#include <stdio.h>
int main(){
	char p[100];
	int i,cnt=0;
	gets(p);
	for(i=0;p[i]!=32&&p[i]!=46;i++){
		cnt++;
	}
	if(i>0){
		printf("%d",cnt);
	} else {
		return 0;
	}
	cnt=0;
	if(p[i]==46){
		return 0;
	}
	while(1){
		do{
			if(p[i]!=32)
				break;
			i++;
		} while(1);
		for(;p[i]!=32&&p[i]!=46;i++){
			cnt++;	
		}
		printf(" %d",cnt);
		cnt=0;
		if(p[i]==46){
			return 0;
		}
	}	
}
