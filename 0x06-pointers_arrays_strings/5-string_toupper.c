#include "main.h"
/**
 * string_toupper - function that covert string to upper case
 * @n: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
