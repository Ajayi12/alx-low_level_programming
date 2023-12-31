#include "main.h"
/**
 * print_alphabet_x10 - program that print lower case alphabet 10 times
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		char i;

		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		c++;
	}
}
