#include <stdio.h>

int main(void)
{	
	int n, k;
	int inc=1;

	printf("��� n �Է� : ");
	scanf("%d", &n);
	
	if(n==0)
	{
		printf("�����ϴ� k ���� \n");
		return 0;
	}
	
	for(k=0; inc*2<=n ; k++)
	{
		inc=inc*2;
	}

	printf("������ �����ϴ� k : %d \n", k);	
	return 0;;
}
