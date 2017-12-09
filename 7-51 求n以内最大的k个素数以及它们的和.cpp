#include <stdio.h>
#include <math.h>
int p(int q);
int main(int argc,char*argv[]){
	int n,k,t=0,count=0,j=0,sum=0,i=0;
	int a[10];
	scanf("%d %d",&n,&k);
	for(i=0;count<k;i++){
		if(n-i==2){
			a[j++]=2;
			count++;
			break;
		}
		t=p(n-i);
		if(t!=0){
			a[j++]=t;
			count++;	
		}
		
	}
	printf("%d",a[0]);
	sum=a[0];
	for(i=1;i<count;i++){
		printf("+%d",a[i]);
		sum+=a[i];
	}
	printf("=%d",sum);
	return 0;
}
//判断一个正整数q是否是素数的函数 
int p(int q){
	double y=q;
	int r=0;
	for(int u=2;u<sqrt(y)+1;u++){
		if(q%u==0){
			r=1;
			break;
		}
	}
	if(r==1){
		return 0;
	} else {
		return q;
	}
}

