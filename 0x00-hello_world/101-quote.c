#include <stdio.h>
#include <stdlib.h>

/**
 * main - puts
 * Description: put the message in standar output
 * Return: 0
 */
int main(void)
{
	write(STDOUT_FILENO,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
