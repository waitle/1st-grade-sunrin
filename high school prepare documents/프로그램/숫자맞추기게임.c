#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
int main(void)
{
	int ok, r;
	printf("	����������			����		��\n");
	printf("  ������  ������     ����  ����		��\n");
	printf("  ��          ��    ��         �� �Ĥ�\n");
	printf("  ������  ������   ��           ��	��\n");
	printf("	���������� \n");
	printf("									��\n");
	printf(" �̤̤̤̤̤̤̤�					��\n");
	printf("		��							��\n");
	printf("   ��\n"); 
	printf("   ��\n")
	printf("   ������������\n");
	printf("��ǻ�ͷ� ���Ƿ��� 1�� �����Ͻ÷��� 2�� �Է�");
	scanf("%d", &r);
	if (r == 1) {
		srand(time(NULL));
		ok = rand() % (9 - 1 + 1) + 1;
		if (ok == 1)
			printf("");
		else if (ok == 2)
			printf("");
		else if (ok == 3)
			printf("");
		else if (ok == 4)
			printf("");
		else if (ok == 5)
			printf("");
		else if (ok == 6)
			printf("");
		else if (ok == 7)
			printf("");
		else if (ok == 8)
			printf("");
		else if (ok == 9)
			printf("");
		else
			printf("");
	}
	else {

	}
}