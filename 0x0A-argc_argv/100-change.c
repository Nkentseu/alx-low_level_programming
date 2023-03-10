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
	int montant = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	montant = atoi(argv[1]);
	if (montant <= 0)
		printf("0\n");
	else
	{
		int v = montant / 25;

		montant = montant % 25;
		v += montant / 10;
		montant = montant % 10;
		v += montant / 5;
		montant = montant % 5;
		v += montant / 2;
		montant = montant % 2;
		v += montant;
		printf("%d\n", v);
	}
	return (0);
}
