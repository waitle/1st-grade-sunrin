#include <stdio.h>
#include <stdlib.h>
void ClearLineFromReadBuffer();

#define LEN 30

typedef struct _book {
	char author[LEN];
	char title[LEN];
	int page;
} book;

int main(void)
{
	int i;
	book* list[3];

	printf("���� ���� �Է�\n");
	for(i=0; i<3; i++)	//������ �Է�
	{
		book * pBook=(book*)malloc(sizeof(book)*1);

		printf("���� : ");
		fgets(pBook->author, LEN, stdin);

		printf("���� : ");
		fgets(pBook->title, LEN, stdin);

		printf("������ �� : ");
		scanf("%d", &(pBook->page));

		ClearLineFromReadBuffer();

		list[i]=pBook;
	}

	printf("\n���� ���� ���\n");
	for(i=0; i<3; i++)	// ������ ����
	{
		printf("book %d \n", i+1);
		printf("���� : %s", list[i]->author);
		printf("���� : %s", list[i]->title);
		printf("������ �� : %d \n", list[i]->page);
	}

	for(i=0; i<3; i++)	// �Ҵ�� �޸� ����.
	{
		free(list[i]);
	}
	
	return 0;
}


void ClearLineFromReadBuffer(void)
{
	while(getchar() != '\n');
}