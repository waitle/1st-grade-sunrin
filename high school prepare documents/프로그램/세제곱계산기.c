#include <stdio.h>
#include <conio.h>


int main(void)
{
	int num = 0, a = 0;
	printf("���������� ���ڸ� �Է�\n");
	scanf("%d", &num);
	for(a=0;;a++)
	{
		if(num==a*a*a)break;
	}
	printf("�������Ͽ� %d�� �Ǵ¼���%d�Դϴ�\n", num, a);
	_getch ();
}