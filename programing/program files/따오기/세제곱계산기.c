#include <stdio.h>
#include <conio.h>


int main(void)
{
	int num = 0, a = 0;
	printf("세제곱당할 숫자를 입력\n");
	scanf("%d", &num);
	for(a=0;;a++)
	{
		if(num==a*a*a)break;
	}
	printf("세제곱하여 %d가 되는수는%d입니다\n", num, a);
	_getch ();
}