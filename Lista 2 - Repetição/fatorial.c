#include <stdio.h>

int fatorial(int f)
{
	int fat;
	if (f == 0 || f == 1)
	{
		return 1;
	}
	else
	{	
		return fatorial(f-1)*f;
	}
}

int main(int argc, char *argv[])
{
	int f, fat;
	scanf("%d", &f);
	fat = fatorial(f);
	printf("%d\n", fat);
	return 0;
}