#include "main.h"

int real_prime(int n, int i);
/**
 * is_prime_number - function that return 1 if the input is prime number
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
int is_prime_number(int n)
{
	int s = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, s));
}
/**
 * real_prime - function that check prime
 * @n: interger value of the parameter
 * @i: interger value of the parameter
 * Return: Always 0 (success)
 */
int real_prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (real_prime(n, i + 1));
}
