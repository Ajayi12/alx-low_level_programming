#include "main.h"
/**
 * flip_bits - function that return the number of bit to be flip
 * @n: value of the parameter
 * @m: value of the parameter
 * Return: Always 0 (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bit, count = 0;

	num_bit = n ^ m;
	while (num_bit != 0)
	{
		count += num_bit & 1;
		num_bit >>= 1;
	}
	return (count);
}
