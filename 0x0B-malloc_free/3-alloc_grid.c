#include "main.h"
#include <stdlib.h>

/**
 * alloc_init - allocated and initialise
 * @size: size of value
 * @init: init value
 * Return: null or pointer to array
 */
int *alloc_init(int size, int init)
{
	int *array = 0;
	int i = 0;

	if (size <= 0)
		return (0);
	array = (int *)malloc(sizeof(int) * size);
	if (array == 0)
		return (0);
	for (i = 0; i < size; i++)
		array[i] = init;
	return (array);
}

/**
 * free_last - free last element
 * @aarray: the array of array
 * @b: begin
 * @e: end
 * Return: void
 */
void free_last(int **aarray, int b, int e)
{
	int i = 0;

	if (e < b)
		return;
	for (i = b; i < e + 1; i++)
	{
		free(aarray[i]);
		aarray[i] = 0;
	}
}
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
		output[i] = alloc_init(height, 0);
		if (output[i] == 0)
		{
			free_last(output, 0, i - 1);
			return (0);
		}
	}
	return (output);
}
