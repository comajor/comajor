#include <stdio.h>
int main(){
	int n,i,j,sum=0;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j!=n-1&&i!=n-1&&j!=n-1){
				sum+=a[i][j];	
			}
		}
	}
	printf("%d\n",sum);
	return 0;
} 
