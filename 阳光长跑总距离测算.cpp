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
	printf("�����ܲ������ܳ�Ϊ��%.2fǧ��\n",all);
	printf("��Ӧ��õ�TD��Ϊ��%d��\n",td);
	if(all>=65){
		printf("��ϲ�����65ǧ�����ⳤ������\n"); 
	} else {
		printf("������ %dǧ�� ������ⳤ�����񣬼��ͣ�\n",65-(int)all); 
	}
	return 0;
}
