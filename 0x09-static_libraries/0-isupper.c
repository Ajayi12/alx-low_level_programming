#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that check the uppercase character
 * @c: integer value of the parameter
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
