#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an interger
 * @size: interger value of the parameter
 * @array: pointer to interger value of the parameter
 * @cmp: pointer to function
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) && array[i])
			{
				return (i);
			}
		}
	}
	return (-1);
}

