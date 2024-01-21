#include "main.h"
/**
 * factorial - function that returns the factorial of a number
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	result = n * factorial(n - 1);
	return (result);
}
