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

	while (n <= 50)
	{
		un_p1 = un + un_m1;
		un_m1 = un;
		un = un_p1;
		printf("%ld", un_p1);
		if (n < 50)
			printf(", ");
		n++;
	}
	printf("\n");
	return (0);
}
