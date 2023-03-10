#include <stdio.h>

/**
 * main - entry point
 * @argc: number of parametter
 * @argv: list of parameter
 * Description: print name of programme
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
