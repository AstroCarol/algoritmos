#include <stdio.h>

float celsius(float f)
{
	float cel;
	cel = ((5 * f) - 160) / 9;
	return cel;
}

float fahrenheint(float c)
{
	float fah;
	fah = ((c * 9) + 160) / 5;
	return fah;
}

int main(int argc, char *argv[])
{
	float f, c, cel, fah;
	char a;
	printf("Digite C para celsius e F para fahrenheint\n");
	scanf("%c", &a);
	if (a == 'C' || a == 'c')
	{
		scanf("%f", &f);
		cel = celsius(f);
		printf("%.2f\n", cel);
	}
	else if ( a == 'F' || a == 'f')
	{
		scanf("%f", &c);
		fah = fahrenheint(c);
		printf("%.2f\n", fah);
	}
	return 0;
}