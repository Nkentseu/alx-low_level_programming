#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			if (i != 1)
				printf(" ");
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
