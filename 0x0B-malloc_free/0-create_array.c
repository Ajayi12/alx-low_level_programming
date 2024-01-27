#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that create an array of char
 * @size: unsigned interger value of the parameter
 * @c: character value of the parameter
 * Return: Always 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
	return (ptr);
}
