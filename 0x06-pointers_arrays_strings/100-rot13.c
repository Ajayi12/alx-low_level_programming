#include "main.h"
#include <string.h>
/**
 * rot13 - function that encodes string using rot13
 * @str: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

			str[i] = (c - base + 13) % 26 + base;
		}
	}
	return (str);
}
