#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long n = 2;
	unsigned long Fn_1 = 1;
	unsigned long Fn_2 = 0;
	unsigned long Fn = 1;

	while (n <= 50)
	{
		Fn = Fn_1 + Fn_2;
		Fn_2 = Fn_1;
		Fn_1 = Fn;

		printf("%ld", Fn);
		if (n < 50)
			printf(", ");
		n++;
	}
	printf("\n");
	return (0);
}
