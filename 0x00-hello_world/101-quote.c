#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - write
 * Description: write the message in standar output
 * Return: 0
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful", 31);
	write(STDOUT_FILENO, "\" - Dora Korpar, 2015-10-19\n", 28);
	return (1);
}
