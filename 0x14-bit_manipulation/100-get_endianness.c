#include "main.h"

/**
 * get_endianness - endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	return (0);
}
