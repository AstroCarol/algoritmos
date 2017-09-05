#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n1;
	scanf("%d", &n1);
	if (n1 == 10)
	{
		printf("A\n");
	}
	else if (n1 == 9 || n1 == 8)
	{
		printf("B\n");
	}
	else if (n1 == 6 || n1 == 7)
	{
		printf("C\n");
	}
	else if (n1 == 5 || n1 == 4 || n1 == 3)
	{
		printf("D\n");
	}
	else if (n1 < 3)
	{
		printf("E\n");
	}
	return 0;
}