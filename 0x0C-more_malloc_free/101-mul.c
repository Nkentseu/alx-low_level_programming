#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_usage(void);
void print_error(void);
int is_positive_number(char *str);
int *multiply(char *num1, char *num2);

/**
 * main - entry point
 * @argc: number of argument
 * @argv: all argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int *result;
	int i;
	
	if (argc != 3)
	{
		print_usage();
		exit(98);
		return (0);
	}
	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		print_error();
		exit(98);
		return (0);
	}
	result = multiply(argv[1], argv[2]);
	for (i = result[0]; i > 0; i--)
		printf("%d", result[i]);
	printf("\n");
	free(result);
	return (0);
}

/**
 * print_usage - print usage
 * Return: void
 */
void print_usage(void)
{
	printf("Usage: mul num1 num2\n");
}

/**
 * print_error - print error
 * Return: void
 */
void print_error(void)
{
	printf("Error\n");
}

/**
 * is_positive_number - verify if str is positive number
 * @str: number
 * Return: 1 or 0
 */
int is_positive_number(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * multiply - mul
 * @num1: number one
 * @num2: number two
 * Return: result
 */
int *multiply(char *num1, char *num2)
{
	int len1, len2, i, j, carry, product;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	result = (int *)malloc(sizeof(int) * (len1 + len2));
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i] += carry;
	}
	for (i = 0; i < len1 + len2 && result[i] == 0; i++) 
		;
	result[0] = len1 + len2 - i;
	return (result + i);
}
