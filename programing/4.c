#include<stdio.h>

void cntDigit(const char *str, int cnt[]);

void main(){
	char str[100];
	char *p=str;
	int arr[10]={0};
	int i;

	scanf("%[^\n]s", str);

	cntDigit(p, arr);

	for(i=0; i<10; i++){
		printf("%d이 사용된 횟수 : %d\n", i, arr[i]);
	}
}

void cntDigit(const char *str, int cnt[]){
	while(*str){
		switch (*str){
		case '0' :
			cnt[0]++;
			break;
		case '1' :
			cnt[1]++;
			break;
		case '2' :
			cnt[2]++;
			break;
		case '3' :
			cnt[3]++;
			break;
		case '4' :
			cnt[4]++;
			break;
		case '5' :
			cnt[5]++;
			break;
		case '6' :
			cnt[6]++;
			break;
		case '7' :
			cnt[7]++;
			break;
		case '8' :
			cnt[8]++;
			break;
		case '9' :
			cnt[9]++;
			break;
		}
		*str++;
	}
}