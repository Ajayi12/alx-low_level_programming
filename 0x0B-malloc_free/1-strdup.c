#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 * @str: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	char *ptr;

	ptr = strdup(str);
	return (ptr);
}
