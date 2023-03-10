#include <stdio.h>

/**
 * main - entry point
 * @argc: number of parametter
 * @argv: list of parameter
 * Description: prints the number of arguments passed into it.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv != 0)
		printf("%d\n", (argc - 1));
	return (0);
}
