#include "main.h"
#include <string.h>
/**
 * _memset - function that filss memory with a constant byte
 * @s: pointer character value of the parameter
 * @b: character value of the parameter
 * @n: unsigned int value of the parameter
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
