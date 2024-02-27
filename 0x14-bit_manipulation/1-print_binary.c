#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
void print_binary(unsigned long int n)
{
	unsigned long int start_point, bit, i;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(unsigned long int) * 8; i > 0; i--)
	{
		mask = 1UL << i;
		bit = (n & mask) ? 1 : 0;

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
