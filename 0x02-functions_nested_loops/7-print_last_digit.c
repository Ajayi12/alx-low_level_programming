#include "main.h"
/**
 * print_last_digit - program that print the last digit of a number
 * @c: the input integer for which the last digit is printed
 * Return: Always 0 (success)
 */
int print_last_digit(int c)
{
	int lastdigit;

	if (c < 0)
	{
		c = -c;
	}
	lastdigit = c % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
