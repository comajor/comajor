#include <stdio.h>
int main(){
	int x,y,a,b,m,n,cnt=0,u;
	scanf("%d %d",&x,&y);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&m,&n);
	while(cnt<100&&(x!=a||y!=b)){
		u=x;
		x=y+m;
		y=n-u;
		cnt++;
	}
	if(cnt==100){
		printf("NO");		
	} else {
		printf("YES");
	}
	return 0;
}
