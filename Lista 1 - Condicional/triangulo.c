#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, hip, cat;
	scanf("%d %d %d", &a, &b, &c);
	hip = a * a;
	cat = (b * b) + (c * c);
	if (hip == cat)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}