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
		int *ligne = (int *)malloc(sizeof(int) * height);
		int k = 0;

		if (ligne == 0)
		{
			int j = 0;

			for (j = 0; j < i; j++)
				free(output[j]);
			return (0);
		}
		for (k = 0; k < height; k++)
			ligne[k] = 0;
		output[i] = ligne;
	}
	return (output);
}
