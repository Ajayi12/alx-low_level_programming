#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocate memory for an array
 * @nmemb: unsigned interger value of the parameter
 * @size: unsigned interger value of the parameter
 * Return: Always 0 (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
