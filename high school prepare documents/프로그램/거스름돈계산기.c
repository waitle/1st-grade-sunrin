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
	printf("나누어질 수를입력하세요");
	scanf("%d", &num1);
	printf("%d를 어떤수로 약분하시겠 습니까?", num1);
	scanf("%d", &num2);
	result = subfunction(num1, num2);
	printf("약분된 분수는 %d / %d 입니다.", num2 / result, num1 / result);
	_getch();
}
