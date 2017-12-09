#include <stdio.h>
int main(){
	int N,i,k;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    i=1;
	for(k=0;k<N;){
		while(a[k]>=a[i]&&i<N){
			i++;
		}
		if(i>N-1){
			break;
		} else {
			k=i;
		}	
	}
	printf("%d %d",a[k],k);
	return 0;
}
