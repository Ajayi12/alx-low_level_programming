#include "main.h"

int sqrt_recursion1(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: inter value of the parameter
 * Return: Always 0 (success)
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_recursion1(n, i));
}
/**
 * sqrt_recursion1 - functin that check prime number
 * @n: interger value of the parameter
 * @i: interger value of the parameter
 * Return: Always 0 (success)
*/
int sqrt_recursion1(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion1(n, i + 1));
}
