#include "main.h"
#include <string.h>
/**
 * _strspn - function that get the length of a prefix substring
 * @s: pointer to the character value of parameter
 * @accept: pointer to the character value of the parameter
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = strspn(s, accept);

	return (length);
}
