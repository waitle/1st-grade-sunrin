#include <stdio.h>
#include <conio.h>

int subfunction(int a, int b)
{
	int temp;
	temp = a % b;
	if (temp == 0)
		return b;
	else
		subfunction(b, temp);
}

int main(void)
{
	int num1, num2;
	int result = 0;
	printf("�������� �����Է��ϼ���");
	scanf("%d", &num1);
	printf("%d�� ����� ����Ͻð� ���ϱ�?", num1);
	scanf("%d", &num2);
	result = subfunction(num1, num2);
	printf("��е� �м��� %d / %d �Դϴ�.", num2 / result, num1 / result);
	_getch();
}
