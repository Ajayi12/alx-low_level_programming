#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: void pointer to the parameter value
 * @old_size: unsigned int to the parameter value
 * @new_size: unsigned int to the parameter value
 * Return: Always 0 (success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_s;
	void *prt;
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size < new_size)
	{
		copy_s = old_size;
	}
	else
	{
		copy_s = new_size;
	}
	prt = malloc(new_size);
	if (prt == NULL)
	{
		return (NULL);
	}
	memcpy(prt, ptr, copy_s);
	free(ptr);
	return (prt);
}
