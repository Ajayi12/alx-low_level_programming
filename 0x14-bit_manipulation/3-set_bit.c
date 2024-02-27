#include "main.h"
/**
 * set_bit - function that set the value of a bit to 1 at a given index
 * @n: pointer to the value of the parameter
 * @index: value of the parameter
 * Return: Always 0 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, num_bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	num_bit = *n | mask;
	*n = num_bit;
	return (1);
}
