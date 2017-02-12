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
	printf("구입한 물건의 가격\n");
	scanf("%d", &num1);
	printf("구입한 물건의 갯수\n");
	scanf("%d", &num2);
	total+=num1*num2;
	printf("가격을 모두 더했으면1을 눌러주세요\n");
	scanf("%d", &num3);
	if(num3==1) break;
	}
	printf("물건 값%d원\n", total);

	printf("손님이 준돈\n");
		scanf("%d", &bat);
	
	nam=bat-total;
	
	printf("오천원:%d\n",nam/ochan);
		nam=nam%ochan;

	printf("천원:%d\n", nam/chan);
		nam=nam%chan;
	
	printf("오백원:%d\n", nam/oback);
		nam=nam%oback;
		
	printf("백원:%d\n", nam/back);
		nam=nam%back;

	printf("오십원:%d\n", nam/oship);
		nam=nam%oship;
	
	printf("십원:%d\n", nam/ship);
		nam=nam%ship;
	printf("일원:%d\n", nam/il);
	printf("중지하려면 1을 아니면 아무키나 입력하세요");
	scanf("%d", &a);
	if(a==1) break;
}
system("cls");
return 0;
}