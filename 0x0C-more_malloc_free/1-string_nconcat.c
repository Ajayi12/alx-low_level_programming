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

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
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
	unsigned int i, length1, length2;

	length1 = strlen(s1);
	length2 = strlen(s2);
	if (n < length2)
	{
		ptr = (char *)malloc((length1 + 1 + n) * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < length1; i++)
		{
			ptr[i] = s1[i];
		}
		for (i = 0; i < n; i++)
		{
			ptr[length1 + i] = s2[i];
		}
	}
	if (n >= length2)
	{
		ptr = (char *)malloc((length1 + 1 + length2) * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < length1; i++)
		{
			ptr[i] = s1[i];
		}
		for (i = 0; i < length2; i++)
		{
			ptr[length1 - 1 + i] = s2[i];
		}
	}
	return (ptr);
}
