#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocated the 2d array
 * @width: width of array
 * @height: height of array
 * Return: pointer of pointer to int or null
 */
int **alloc_grid(int width, int height)
{
	int **output = 0;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (0);
	output = (int **)malloc(sizeof(int *) * width);
	if (output == 0)
		return (0);
	for (i = 0; i < width; i++)
	{
		output[i] = (int *)malloc(sizeof(int) * height);
		if (output == 0)
		{
			int j = 0;

			for (j = 0; j < i; j++)
			{
				free(output[j]);
				output[j] = 0;
			}
			return (0);
		}
	}
	return (output);
}
