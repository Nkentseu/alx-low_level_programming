#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long double un = 1;
	long double un_p1 = un, un_m1 = 0, p1 = 0, p2 = 0;
	long double p1_1 = 0, p2_1 = 0, p1_2 = 0, p2_2 = 0;
	int n = 1;

	while (n <= 98)
	{
		un_p1 = un + un_m1;
		un_m1 = un;
		un = un_p1;
		if (un + un_m1 > 51680708854858323072)
		{
			if (p1 == 0 || p2 == 0)
			{
				p1 = (un + un_m1) / 10000000000000000;
				p2 = (un + un_m1) - (p1 * 10000000000000000);
			}
			else
			{
				p1 = (p1_1 + p1_2 + p2_1 + p2_2) / 10000000000000000;
				p2 = (p1_1 + p1_2 + p2_1 + p2_2) - (p1 * 10000000000000000);
			}
			p1_2 = p1_1;
			p2_2 = p2_1;
			p1_1 = p1;
			p2_1 = p2;
			printf("%.0Lf%.0Lf", p1, p2);
		}
		else
		{
			printf("%.0Lf", un_p1);
			un_m1 = un;
			un = un_p1;
		}
		if (n < 98)
			printf(", ");
		n++;
	}
	printf("\n");
	return (0);
}
