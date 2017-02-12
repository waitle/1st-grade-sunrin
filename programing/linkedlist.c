#include <stdio.h>
#include <stdlib.h>
struct List {
   char data;
   struct List *next;
};
typedef struct List node;

node *head, *tail; //연결리스트의 시작 노드 , 끝노드

void initLinkedList(void) {//연결리스트를 초기화 하는 함수
   head = (node*)malloc(sizeof(node)); //동적메모리 할당 후 head에 연결
   tail = (node*)malloc(sizeof(node));
   tail->next = NULL;
   head->next = tail;
   printf("1. 연결리스트의 초기화\n");
   printf("연결 리스트가 초기화 되었습니다.\n\n");
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
   printf("4. head다음 노드의 삭제\n");
   node *deleteNode = head->next;
   if (deleteNode == tail) {
      printf("삭제할 노드가 없습니다.");
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
      printf("연결리스트에 노드가 존재합니다.\n");
   }
   else
      printf("연결리스트에 노드가 존재하지않습니다.\n");
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
   printf("2. 연결리스트에 데이터 입력\n");
   printf("insertNode('A')\ninsertNode('B')\ninsertNode('C')\n");
   insertNode('A');
   insertNode('B');
   insertNode('C');
   printf("\n3. 연결리스트의 내용 출력\n");
   printLinkedList();
   deleteHeadNextNode(); //head의 다음 노드 삭제
   printLinkedList();// B C
   printf("5. 연결리스트에서 특정 노드 검색\n");
   printf("searchNode('C')\n");
   searchNode('C');
   printf("searchNode('X')\n");
   searchNode('X');
   printf("\n");
   printf("6. 특정노드 뒤에 데이터 입력 : insertAfter(searchNode : ('B'), 'X')\n");
   printf("searchNode : 'B'\n");
   printf("insertAfter('B', 'X')\n");
   insertAfter('B', 'X');
   printLinkedList();
   printf("7. 특정노드 삭제 deleteNode('C') \n");
   deleteNode('C');
   printLinkedList();
   return 0;
}