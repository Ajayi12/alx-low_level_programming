#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverse a string
 * @*s: pointer char of the parameter
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
	int length, i, s;

	length = strlen(s);
	*i = length - 1;
	c = 0;
	while (c < i)
	{
		char temp = s[c];
		s[c] = s[i];
		s[i] = temp;
		i--;
		c++;
	}

}
