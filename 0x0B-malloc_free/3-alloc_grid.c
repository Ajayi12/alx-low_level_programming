#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function return a pointer to a 2D array
 * @width: interger value of the parameter
 * @height: interger value of the parameter
 * Return: Always 0 (success)
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
		{
			fprintf(stderr, "Error: failed to allocate memory\n");
			return (NULL);
		}
	}
	return (ptr);
}
