#include "main.h"
#include <ctype.h>
/**
 * _isalpha - program that checks for alphabetic character
 * @c: the interger value
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
