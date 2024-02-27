#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
void print_binary(unsigned long int n)
{
	int mask;
	int i, start_point, bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = 64;
	for (i = mask - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;

		if (bit == 1)
		{
			start_point = 1;
		}
		if (start_point == 1)
		{
			_putchar(bit + '0');
		}
	}
}
