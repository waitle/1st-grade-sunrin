#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArray(int a[], int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%d   ", a[i]);
	}
	printf("\n");
}

void selectionSort(int arr[], int MAX)
{
	int indexMin, i, j;
	for (i = 0; i < MAX - 1; i++)
	{
		indexMin = i;
		for (j = i + 1; j<MAX; j++)
		{
			if (arr[j] < arr[indexMin]) {
				indexMin = j;
			}
		}

		if (indexMin != i)
		{
			int temp = arr[indexMin];
			arr[indexMin] = arr[i];
			arr[i] = temp;
		}
	}
}

int binarySearch(int arr[], int find, int count)
{
	int lowerBound = 0;
	int upperBound = count - 1;
	int midPoint = -1;
	int counts = 0;
	int index = -1;

	while (lowerBound <= upperBound)
	{
		printf("��");
		counts++;
		midPoint = lowerBound + (upperBound - lowerBound) / 2;

		// �˻�
		if (arr[midPoint] == find)
		{
			index = midPoint;
			break;
		}
		else {
			if (arr[midPoint] < find)//�ݺ��� Ŭ��
				lowerBound = midPoint + 1;
			else//�ݺ��� ������
				upperBound = midPoint - 1;
		}
	}
	return index;
}

void main()
{
	int arr[10];
	int i;
	int find;
	int count = 0;

	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 24 + 1;
	}

	printf("�迭��� : \n");
	printArray(arr, 10);
	printf("\nã�� ���� �Է� : ");
	scanf("%d", &find);
	printf("\n����..:  \n");
	selectionSort(arr, 10);
	printArray(arr, 10);
	printf("\nBinarySearch(�˻�Ƚ��) : ");

	int location = binarySearch(arr, find, 10);

	if (location != -1)//������
		printf("\n%d���� %d�� ��ġ�մϴ�\n\n", find, (location + 1));
	else
		printf("\n�� %d�� ã�� �� �����ϴ�\n\n", find);
}