#include "main.h"
/**
 * print_sign - program that print the sign of a number
 * @n: the interger value to be use in the code
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
