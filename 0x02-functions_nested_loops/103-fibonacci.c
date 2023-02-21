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
	unsigned long sum = 0;

	while (un_p1 <= 4000000)
	{
		un_p1 = un + un_m1;
		un_m1 = un;
		un = un_p1;
		sum += (un_p1 % 2 == 0) ? un_p1 : 0;
	}
	printf("%ld\n", sum);
	return (0);
}
