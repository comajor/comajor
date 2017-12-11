#include <stdio.h>
int main(){
	int i,m,k,sum=0,x=0;
	scanf("%d",&m);
	int a[m];
	int b[m+1];
	for(i=0;i<m;i++){
		scanf("%d",a+i);
	}
	for(k=0;k<m+1;k++){
		for(i=k;i<m;i++){
			sum+=a[i];
			if(sum>180){
				sum=180-sum+a[i]<sum-180?sum-a[i]:sum;
				break;
			}
			if(i==m-1){
				i=-1;
			}
		}
		x=2*sum-360;
		if(x<0){
			x=-x;
		}
		b[k]=x;
		sum=0;
	}
	k=0;
	for(i=k+1;i<m;i++){
		if(b[k]>b[i]){
			k=i;
		}
	}
	printf("%d",b[k]);
	return 0;
}

