#include <stdio.h>
const int Blackhole=495;
int max(int a,int b,int c);
int min(int a,int b,int c);
int main(int argc,char const* argv[]){
	int num,a,b,c,cnt=0;
	scanf("%d",&num);
	do{
		a=num%10;
		num/=10;
		b=num%10;
		num/=10;
		c=num;
		num=max(a,b,c)-min(a,b,c);
		cnt++;
		printf("%d: %d - %d = %d\n",cnt,max(a,b,c),min(a,b,c),num);
	} while (num!=Blackhole&&cnt<7);
	return 0;
}
int max(int a,int b,int c){
	if(a>b){
		if(a>c){
			if(b>c){
				return 100*a+10*b+c;
			} else {
				return 100*a+10*c+b;
			}
		} else {
			return 100*c+10*a+b;
		}
	} else {
		if(b>c){
			if(a>c){
				return 100*b+10*a+c;
			} else {
				return 100*b+10*c+a;
			}
		} else {
			return 100*c+10*b+a;
		}
	}
}
int min(int a,int b,int c){
	if(a>b){
		if(a>c){
			if(b>c){
				return 100*c+10*b+a;
			} else {
				return 100*b+10*c+a;
			}
		} else {
			return 100*b+10*a+c;
		}
	} else {
		if(b>c){
			if(a>c){
				return 100*c+10*a+b;
			} else {
				return 100*a+10*c+b;
			}
		} else {
			return 100*a+10*b+c;
		}
	}
}
