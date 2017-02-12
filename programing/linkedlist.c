#include <stdio.h>
#include <stdlib.h>
struct List {
   char data;
   struct List *next;
};
typedef struct List node;

node *head, *tail; //���Ḯ��Ʈ�� ���� ��� , �����

void initLinkedList(void) {//���Ḯ��Ʈ�� �ʱ�ȭ �ϴ� �Լ�
   head = (node*)malloc(sizeof(node)); //�����޸� �Ҵ� �� head�� ����
   tail = (node*)malloc(sizeof(node));
   tail->next = NULL;
   head->next = tail;
   printf("1. ���Ḯ��Ʈ�� �ʱ�ȭ\n");
   printf("���� ����Ʈ�� �ʱ�ȭ �Ǿ����ϴ�.\n\n");
}
void insertNode(char inputData) {
   node *newNode = (node*)malloc(sizeof(node));
   node *p;
   p = head;
   while (p->next != tail) {
      p = p->next;
   }
   newNode->data = inputData;
   newNode->next = tail;
   p->next = newNode;
}
void printLinkedList(void) {
   node *p;
   p = head->next;
   while (p != tail) {
      printf("%-3c", p->data);
      p = p->next;
   }
   printf("\n\n");
}
void deleteHeadNextNode(void) {
   printf("4. head���� ����� ����\n");
   node *deleteNode = head->next;
   if (deleteNode == tail) {
      printf("������ ��尡 �����ϴ�.");
      return;
   }
   printf("deleteHeadNextNode : A\n");
   head->next = deleteNode->next;
   free(deleteNode);
}

void searchNode(char input)
{
   node *p = head;
   int cnt = 0;
   while (p != tail)
   {
      if (p->data == input)
         cnt++;
      p = p->next;
   }
   if (cnt)
   {
      printf("���Ḯ��Ʈ�� ��尡 �����մϴ�.\n");
   }
   else
      printf("���Ḯ��Ʈ�� ��尡 ���������ʽ��ϴ�.\n");
}

void insertAfter(char After, char toinsert)
{
   node *newNode = (node*)malloc(sizeof(node));
   node *p = head;
   node *t;
   while (p->data != After)
   {
      p = p->next;
   }
   t = p->next;
   newNode->data = toinsert;
   newNode->next = t;
   p->next = newNode;
}

void deleteNode(char input)
{
   node *p = head;
   node *pp = head;
   int cnt = 0;
   while (p->data != input)
   {
      p = p->next;
      cnt++;
   }
   cnt--;
   while (cnt != 0)
   {
      pp = pp->next;
      cnt--;
   }
   p = p->next;
   pp->next = p;
}

int main() {
   initLinkedList();
   printf("2. ���Ḯ��Ʈ�� ������ �Է�\n");
   printf("insertNode('A')\ninsertNode('B')\ninsertNode('C')\n");
   insertNode('A');
   insertNode('B');
   insertNode('C');
   printf("\n3. ���Ḯ��Ʈ�� ���� ���\n");
   printLinkedList();
   deleteHeadNextNode(); //head�� ���� ��� ����
   printLinkedList();// B C
   printf("5. ���Ḯ��Ʈ���� Ư�� ��� �˻�\n");
   printf("searchNode('C')\n");
   searchNode('C');
   printf("searchNode('X')\n");
   searchNode('X');
   printf("\n");
   printf("6. Ư����� �ڿ� ������ �Է� : insertAfter(searchNode : ('B'), 'X')\n");
   printf("searchNode : 'B'\n");
   printf("insertAfter('B', 'X')\n");
   insertAfter('B', 'X');
   printLinkedList();
   printf("7. Ư����� ���� deleteNode('C') \n");
   deleteNode('C');
   printLinkedList();
   return 0;
}