#include <stdio.h>

typedef unsigned int uint;

typedef struct{
	int h, m, s;
} CLOCK;

int hourGap(uint time1, uint time2)
{
	CLOCK h1, h2;

	h1.h = (int)time1 / 10000;
	h2.h = time2 / 10000;

	time1 %= 10000;
	time2 %= 10000;

	h1.m = (int)time1 / 100; h2.m = (int)time2 / 100;
	h1.s = (int)time1 % 100; h2.s = (int)time2 % 100;

	return (h2.h - h1.h)*3600 + (h2.m - h1.m)*60 + (h2.s - h1.s);
}
int main()
{
	uint h1, h2;
	printf("\nPrimeiro horario: "); scanf("%u", &h1);
	printf("\nSegundo horario: "); scanf("%u", &h2);

	printf("\nDiferenca em segundos: %d", hourGap(h1, h2));

	return 0;
}