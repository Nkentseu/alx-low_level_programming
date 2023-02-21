#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long un = 1;
	unsigned long un_p1 = un;
	unsigned long un_m1 = 0;
	unsigned long n = 1;

	for (n = 1; n <= 50; n++)
	{
		printf("%ld", un_p1);
		if (n != 0)
			printf(", ");
		un_p1 = un + un_m1;
		un_m1 = un;
		un = un_p1;
	}
	printf("\n");
	return (0);
}
