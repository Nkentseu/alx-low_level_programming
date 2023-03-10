#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of parametter
 * @argv: list of parameter
 * Description: print name of programme
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
	}
	return (0);
}
