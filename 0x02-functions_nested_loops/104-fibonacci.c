#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	double un = 1;
	double un_p1 = un;
	double un_m1 = 0;
	unsigned long n = 1;

	while (n <= 98)
	{
		un_p1 = un + un_m1;
		un_m1 = un;
		un = un_p1;
		printf("%.0f", un_p1);
		if (n < 98)
			printf(", ");
		n++;
	}
	printf("\n");
	return (0);
}
