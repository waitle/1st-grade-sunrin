#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
int main(void)
{
	int ok, r;
	printf("	ししししし			ささ		つ\n");
	printf("  ししし  ししし     ささ  ささ		つ\n");
	printf("  し          し    さ         さ つつ\n");
	printf("  ししし  ししし   さ           さ	つ\n");
	printf("	ししししし \n");
	printf("									つ\n");
	printf(" ぬぬぬぬぬぬぬぬ					つ\n");
	printf("		ぬ							つ\n");
	printf("   い\n"); 
	printf("   い\n")
	printf("   いいいいいい\n");
	printf("陳濃斗稽 左叔形檎 1聖 送羨馬獣形檎 2研 脊径");
	scanf("%d", &r);
	if (r == 1) {
		srand(time(NULL));
		ok = rand() % (9 - 1 + 1) + 1;
		if (ok == 1)
			printf("");
		else if (ok == 2)
			printf("");
		else if (ok == 3)
			printf("");
		else if (ok == 4)
			printf("");
		else if (ok == 5)
			printf("");
		else if (ok == 6)
			printf("");
		else if (ok == 7)
			printf("");
		else if (ok == 8)
			printf("");
		else if (ok == 9)
			printf("");
		else
			printf("");
	}
	else {

	}
}