
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
int main(void)
{
	int p, p2;
	int i, in, ok;
	int restart;
	printf("1인이면1을 2인이면 2를 입력해 주세요");
	scanf("%d", &p);
	if(p==1)
	{
		for(;;)
		{
		srand(time(NULL));
		ok = rand()%(99-1+1)+1;
		system("cls");
		printf("0부터 99까지의 숫자를 맟춰봐아\n");
			for(i=1;i<=7  ;i++)
		{
			printf("숫자를 입력해봐아\n");
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
				printf("%d번째 성고옹!\n", i);
				printf("다시시작하려면1아니면2를 눌러주세요\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("게임이 종료되었습니다\n");
					exit(1);
				}
				else
				{i=1;
				break;}
			}
			if(i%7==0)
			{
				printf("게임이 끝났습니다아\n");
				printf("다시시작하려면1아니면2를 눌러주세요\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("게임이 종료되었습니다\n");
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
		printf("몰래 1부터99까지 숫자를 하나 입력해봐");
			scanf("%d", &p2);
			system("cls");
			printf("0부터 99까지의 숫자를 맟춰봐아\n");
			for(i=1;i<=7  ;i++)
		{
			printf("숫자를 입력해봐아\n");
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
				printf("%d번째 성고옹!\n", i);
				printf("다시시작하려면1아니면2를 눌러주세요\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("게임이 종료되었습니다\n");
					exit(1);
				}
				else
				{i=1;
				break;}
			}
			if(i%7==0)
			{
				printf("게임이 끝났습니다아\n");
				printf("다시시작하려면1아니면2를 눌러주세요\n");
				scanf("%d", &restart);
				system("cls");
				if (restart==2)
				{
					printf("게임이 종료되었습니다\n");
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
		printf("잘못된값 게임을 종료합니다\n");
		exit(1);
	}
}