#include "main.h"
#include <string.h>
/**
 * puts_half - function that print half of a string
 * @str: pointer character of the parameter
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int length, n;
	int length2, j;

	length = strlen(str);
	length2 = length - 1;
	n = length2 / 2;
	j = n + 1;
	while (j <= length2)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
