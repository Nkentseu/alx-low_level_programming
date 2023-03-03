#include "main.h"
#include <stdio.h>

/**
 * print_hexa - print hexa
 * @b: buffer
 * @begin: begin
 * @size: size
 * Return: void
 */
void print_hexa(char *b, int begin, int size)
{
	int j = 0;

	for (j = 0; j < 5; j++)
	{
		int position = begin + (j * 2);

		if (position < size)
			printf(" %02x", b[position]);
		else
			printf("   ");
		if (position + 1 < size)
			printf("%02x", b[position + 1]);
		else
			printf("  ");
	}
}

/**
 * print_char - print
 * @b: buffer
 * @begin: begin
 * @size: size
 * Return: void
 */
void print_char(char *b, int begin, int size)
{
	int j = 0;
	int i = 0;

	for (j = 0; j < 5; j++)
	{
		int position = begin + (j * 2);

		for (i = 0; i < 2; i++)
		{
			if (position + i < size)
			{
				if (b[position + i] >= 32 && b[position + i] <= 126)
					printf("%c", b[position + i]);
				else
					printf(".");
			}
			else
				break;
		}
	}
}

/**
 * print_buffer - buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int count = (size % 10 == 0) ? size / 10 : 1 + (size / 10);

	if (size <= 0)
		return;
	for (i = 0; i < count; i++)
	{
		printf("%08x:", i * 10);
		print_hexa(b, i * 10, size);
		printf(" ");
		print_char(b, i * 10, size);
		printf("\n");
	}
}
