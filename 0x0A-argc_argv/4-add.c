#include <stdio.h>
#include <stdlib.h>

/**
 * content_c - content
 * @s: string
 * Return: 1 or 0
 */
int content_c(char *s)
{
	if (s == 0 || s[0] == '\0')
		return (0);
	if (s[0] < '0' || s[0] > '9')
		return (1);
	return (content_c((s + 1)));
}

/**
 * main - entry point
 * @argc: number of parametter
 * @argv: list of parameter
 * Description: print name of programme
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (content_c(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
