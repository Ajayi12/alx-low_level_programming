#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function that concantenates two string
 * @s1: pointer to character value of the parameter;
 * @s2: pointer to character value of the parameter
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
char *lenny(char *s1, char *s2, unsigned int n);
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL)
	{
		s1 ="";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = lenny(s1, s2, n);
	return (str);
}
/**
 * lenny - function that concantenates two string
 * @s1: pointer to character value of the parameter;
 * @s2: pointer to character value of the parameter
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
char *lenny(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, length1, length2, j;

	length1 = strlen(s1);
	length2 = strlen(s2);
	if (n >= length2)
	{
		n = length2;
	}
	ptr = (char *)malloc((length1 + 1 + n) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[length1 + j] = s2[j];
	}
	return (ptr);
}
