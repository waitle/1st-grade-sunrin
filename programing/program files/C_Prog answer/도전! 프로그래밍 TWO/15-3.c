#include<stdio.h>

int main(void)
{
	int arr[10];
	int front=0, back=9;
	int num, i;
	
	printf("�� 10���� ���� �Է� \n");
	for(i=0; i<10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &num);
		if(num%2==1)
			arr[front++]=num;
		else
			arr[back--]=num;
	}

	printf("�迭 ����� ��� : ");
	for(i=0; i<10; i++)
		printf("%d ", arr[i]);

	return 0;
}