#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - function that covert string to upper case
 * @n: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
char *string_toupper(char *n)
{
	int result, i;

	result = strlen(n);
	i = 0;
	while (i < result)
	{
		n[i] = toupper((unsigned char)n[i]);
		i++;
	}
	return (n);
}
