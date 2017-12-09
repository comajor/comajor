#include <stdio.h>
int main(){
	int k=0,td,dist;
	double pow=2000.0,all=0.0;
	while(k<15){
		scanf("%d",&dist);
		if(dist!=0&&dist!=-1){
			all+=dist-2000+pow;
			k++;
			pow*=1.2;
		} else if (dist==0) {
			pow=2000.0;
			k++;
			continue;
		} else {
			break;
		}
	}
	all=all/1000;
	td=(int)all/2;
	printf("您的跑步距离总长为：%.2f千米\n",all);
	printf("您应获得的TD数为：%d次\n",td);
	if(all>=65){
		printf("恭喜您达成65千米阳光长跑任务！\n"); 
	} else {
		printf("您还差 %d千米 完成阳光长跑任务，加油！\n",65-(int)all); 
	}
	return 0;
}
