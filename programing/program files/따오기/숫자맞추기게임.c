
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
int main(void)
{
	int p, p2;
	int i, in, ok;
	int restart;
	printf("1���̸�1�� 2���̸� 2�� �Է��� �ּ���");
	scanf("%d", &p);
	if(p==1)
	{
		for(;;)
		{
		srand(time(NULL));
		ok = rand()%(99-1+1)+1;
		system("cls");
		printf("0���� 99������ ���ڸ� �������\n");
			for(i=1;i<=7  ;i++)
		{
			printf("���ڸ� �Է��غ���\n");
			scanf("%d", &in);
			if(in<ok)
			{
				printf("UP!\n");
			}
			else if (in>ok)
			{
				printf("DOWN!\n");
			}
			else
			{
				printf("%d��° �����!\n", i);
				printf("�ٽý����Ϸ���1�ƴϸ�2�� �����ּ���\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("������ ����Ǿ����ϴ�\n");
					exit(1);
				}
				else
				{i=1;
				break;}
			}
			if(i%7==0)
			{
				printf("������ �������ϴپ�\n");
				printf("�ٽý����Ϸ���1�ƴϸ�2�� �����ּ���\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("������ ����Ǿ����ϴ�\n");
					exit(1);
				}
				else
				{i=1;
			break;}
			}	

		}
	}
	}
	else if(p==2)
	{
		for(;;)
		{
		printf("���� 1����99���� ���ڸ� �ϳ� �Է��غ�");
			scanf("%d", &p2);
			system("cls");
			printf("0���� 99������ ���ڸ� �������\n");
			for(i=1;i<=7  ;i++)
		{
			printf("���ڸ� �Է��غ���\n");
			scanf("%d", &in);
			if(in<p2)
			{
				printf("UP!\n");
			}
			else if (in>p2)
			{
				printf("DOWN!\n");
			}
			else
			{
				printf("%d��° �����!\n", i);
				printf("�ٽý����Ϸ���1�ƴϸ�2�� �����ּ���\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("������ ����Ǿ����ϴ�\n");
					exit(1);
				}
				else
				{i=1;
				break;}
			}
			if(i%7==0)
			{
				printf("������ �������ϴپ�\n");
				printf("�ٽý����Ϸ���1�ƴϸ�2�� �����ּ���\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("������ ����Ǿ����ϴ�\n");
					exit(1);
				}
				else
				{i=1;
			break;}
			}
		}
		}	
	}
	else
	{
		system ("cls");
		printf("�߸��Ȱ� ������ �����մϴ�\n");
		exit(1);
	}
}