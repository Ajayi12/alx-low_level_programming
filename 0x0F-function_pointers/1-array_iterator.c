#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - functions that executes a function given as parameter
 * @array: pointer to interger value of the parameter
 * @size: unsigned int value of the parameter
 * @action: function pointer
 * Return: Always 0 (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action && array)
		{
			action(array[i]);
		}
	}
}
