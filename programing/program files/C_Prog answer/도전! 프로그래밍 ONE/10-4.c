#include<stdio.h>

const int BREAD=500;
const int SNACK=700;
const int DRINK=400;

int main(void)
{
	int i, j, k;
	int money;
	printf("���� ����� �����ϰ� �ִ� �ݾ� : ");
	scanf("%d", &money);

	for(i=1; i<money/BREAD; i++)
	{
		for(j=1; j<money/SNACK; j++)
		{
			for(k=1; k<money/DRINK; k++)
			{
				if(money==BREAD*i+SNACK*j+DRINK*k)
				{
					printf("ũ���� %d��, ", i);
					printf("����� %d��, ", j);
					printf("��  �� %d�� \n", k);
				}
			}
		}
	}

	printf("��� �����Ͻðڽ��ϱ�? \n");
	return 0;
}
