#include "main.h"
#include <ctype.h>
/**
 * _islower - program that checks if an alphabet is lowercase
 * Return: Always 1 (success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
