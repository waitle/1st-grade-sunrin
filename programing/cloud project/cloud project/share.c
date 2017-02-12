#include <stdio.h>
#include<string.h>
int main()
{
	char arr[100][100] = { 0, };
	char len[100] = { 0, };
	char longs[100] = { 0, };
	int most = 0;
	int i, j, last = 0;
	FILE *in = fopen("bank.dat", "r");
	FILE *out = fopen("result.dat", "w");
	for (i = 0; i < 100; i++) {
		fscanf(in, " %s", &arr[i]);
		for (j = 0; j < 100; j++)
			if (arr[j] <=128)
				len[i]++;
		last += len[i] + 1;
		if (len > most) {
			most = len;
			strncpy(longs, arr[i], len[i]);
		}
	}
	fprintf(out, "%d\n", --last);
	fprintf(out, "%s\n", longs);
	for (i = 0; i < 100; i++) {

			fprintf(out, "%d %s \n", len[i], arr[i]);
	}
}