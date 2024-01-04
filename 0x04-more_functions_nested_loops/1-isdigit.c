#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function that checks for a digit
 * @c: integer value of the parameter
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
