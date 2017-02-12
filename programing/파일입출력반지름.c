#include <stdio.h>
int main(){
	FILE *fp;
	double dou;
	fp=fopen("Circle.txt","r");

		if(fp==NULL){
		printf("파일 읽기 오류");
		return -1;
	}
		while(fscanf(fp,"%lf",&dou)!=EOF){
			printf("원의 둘레 : %.1lf",dou);
			printf(" - 원의 반지름 : %.2lf\n",dou/3.14/2);
		}

	return 0;
}