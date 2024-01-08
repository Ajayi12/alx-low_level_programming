#include "main.h"
#include <string.h>
/**
 * puts2 - function that print string
 * @str: pointer character
 * Return: Always 0 (success)
 */
void puts2(char *str)
{
	int length, alength, i;

	length = strlen(str);
	alength = length - 1;
	i = 0;
	while (i <= alength)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
