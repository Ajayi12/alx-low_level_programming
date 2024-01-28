#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integer
 * @min: interger value of the parameter
 * @max: interger value of the parameter
 * Return: Always 0 (succes)
 */
int *array_range(int min, int max)
{
	int i, length, *ptr;

	if (min > max)
	{
		return (NULL);
	}
	length = max - min + 1;
	ptr = (int *)malloc(length * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
