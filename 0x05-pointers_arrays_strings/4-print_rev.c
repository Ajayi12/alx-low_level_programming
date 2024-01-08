#include "main.h"
#include <string.h>
/**
 * print_rev - function that print string in reverse
 * @s: pointer integer of the parameter
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int length, i;

	length = strlen(s);
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
