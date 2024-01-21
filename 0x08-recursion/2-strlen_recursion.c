#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to the character value of the parameter
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
	}
	return (length);
}
