#include <stdio.h>
int main(){
	FILE *fp;
	double dou;
	fp=fopen("Circle.txt","r");

		if(fp==NULL){
		printf("���� �б� ����");
		return -1;
	}
		while(fscanf(fp,"%lf",&dou)!=EOF){
			printf("���� �ѷ� : %.1lf",dou);
			printf(" - ���� ������ : %.2lf\n",dou/3.14/2);
		}

	return 0;
}