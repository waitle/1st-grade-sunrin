#include<stdio.h>
#include<string.h>
int main()
{
	FILE *in = fopen("bank.dat", "r");
	FILE *out = fopen("result.dat", "w");
	int dst[100][100];
	int src[100][100];
	int len = 0;
	int i;
	int cnt1 = 0, cnt2 = 0;
	fgets(src, 100, in);
	len = strlen(src);
	fprintf(stdout, "%d", len);
	fprintf(out, "%d", len);
	for (i == 0; i < len; i++)
	{
		if (src[i] == ' ' || src[i] == '.')
		{
			dst[cnt1][cnt2] = '\0';
			cnt1++, cnt2 = 0;
		}
		else {
			dst[cnt1][cnt2] = src[i];
			cnt2++;
		}
			
	}
}