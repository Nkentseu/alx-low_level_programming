#include "main.h"
#include <unistd.h>

/**
 * puts_half - put half
 * @str: str
 * Return: void
 */
void puts_half(char *str)
{
	char end = '\n';
	unsigned long begin = 0;

	if (str == 0 || str[0] == '\0')
	{
		write(1, &end, 1);
		return;
	}
	while (str[begin++])
		;
	begin--;
	if (begin <= 1)
	{
		write(1, &end, 1);
		return;
	}
	begin = (begin % 2 == 1) ? (begin / 2) + 1 : begin / 2;
	while (str[begin])
		write(1, &str[begin++], 1);
	write(1, &end, 1);
}
