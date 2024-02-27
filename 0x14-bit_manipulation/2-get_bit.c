#include "main.h"
/**
 * get_bit - function that return the value of a bit at a given index
 * @n: value of the parameter
 * @index: value of the parameter
 * Return: Always 0 (success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, i, num_bits;

	for (i = 0; i < 32; i++)
	{
		mask = 1UL << i;
		num_bits = (n & mask) ? 1 : 0;
		if (i == index)
		{
			return (num_bits);
		}
	}
	return (-1);
}
