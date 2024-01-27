#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two string
 * @s1: pointer to the character value of the parameter
 * @s2: poiner to the character value of the parameter
 * Return: Always 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, result, result1, result3, j;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		fprintf(stderr, "Error: both string must be non null");
		return (NULL);
	}
	result = strlen(s1);
	result1 = strlen(s2);
	result3 = result + result1;
	ptr = (char *)malloc((result3 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: failed to allocate memory\n");
		return (NULL);
	}
	for (i = 0; i < result; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < result1; j++)
	{
		ptr[result + j] = s2[j];
	}
	return (ptr);
}
