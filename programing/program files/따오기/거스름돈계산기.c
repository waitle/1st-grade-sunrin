#include <stdio.h>
#include<Windows.h>

int main(void)
{ int a;
int num1, num2, num3, total=0;
int bat, nam, ochan, chan, oback, back, oship, ship, il;
		ochan=5000;
		chan=1000;
		oback=500;
		back=100;
		oship=50;
		ship=10;
		il=1;
for (;;)
{
	system("cls");
	for(;;)
	{
	printf("������ ������ ����\n");
	scanf("%d", &num1);
	printf("������ ������ ����\n");
	scanf("%d", &num2);
	total+=num1*num2;
	printf("������ ��� ��������1�� �����ּ���\n");
	scanf("%d", &num3);
	if(num3==1) break;
	}
	printf("���� ��%d��\n", total);

	printf("�մ��� �ص�\n");
		scanf("%d", &bat);
	
	nam=bat-total;
	
	printf("��õ��:%d\n",nam/ochan);
		nam=nam%ochan;

	printf("õ��:%d\n", nam/chan);
		nam=nam%chan;
	
	printf("�����:%d\n", nam/oback);
		nam=nam%oback;
		
	printf("���:%d\n", nam/back);
		nam=nam%back;

	printf("���ʿ�:%d\n", nam/oship);
		nam=nam%oship;
	
	printf("�ʿ�:%d\n", nam/ship);
		nam=nam%ship;
	printf("�Ͽ�:%d\n", nam/il);
	printf("�����Ϸ��� 1�� �ƴϸ� �ƹ�Ű�� �Է��ϼ���");
	scanf("%d", &a);
	if(a==1) break;
}
system("cls");
return 0;
}