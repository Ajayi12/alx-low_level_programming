#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer to the string to be reversed
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
	int i, length, length2;
	char temp;

	length = strlen(s);
	length2 = length / 2;
	i = 0;
	while (i < length2)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		i++;
	}
}
