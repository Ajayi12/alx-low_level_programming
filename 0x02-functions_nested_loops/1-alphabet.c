#include "main.h"
/**
 * print_alphabet - programs that print lowercase alphabet
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
