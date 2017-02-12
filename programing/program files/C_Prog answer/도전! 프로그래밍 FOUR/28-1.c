#include <stdio.h>
void ClearLineFromReadBuffer(void);

#define LEN 30

typedef struct _book 
{
	char author[LEN];
	char title[LEN];
	int page;
} book;

int main(void)
{
	book list[3];
	int i;

	printf("���� ���� �Է�\n");
	for(i=0; i<3; i++)	//������ �Է�
	{
		printf("���� : ");
		fgets(list[i].author, LEN, stdin);

		printf("���� : ");
		fgets(list[i].title, LEN, stdin);

		printf("������ �� : ");
		scanf("%d", &(list[i].page));

		ClearLineFromReadBuffer();
	}
	printf("\n");

	printf("���� ���� ���\n");
	for(i=0; i<3; i++)	//������ ����
	{
		printf("book %d \n", i+1);
		printf("���� : %s", list[i].author);
		printf("���� : %s", list[i].title);
		printf("������ �� : %d \n", list[i].page);
	}
	
	return 0;
}

void ClearLineFromReadBuffer(void)
{
	while(getchar() != '\n');
}
