#include "main.h"
#include <string.h>
/**
 * _strpbrk - function that searches for a string
 * @s: pointer to the character value of the parameter
 * @accept: pointer to the character value of the parameter
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *result = strpbrk(s, accept);

	return (result);
}
