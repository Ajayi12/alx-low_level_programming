#include "main.h"
/**
 * _pow_recursion - finction that return the value of x raised to value of y
 * @x: interger value of the parameter
 * @y: interger value of the parameter
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
