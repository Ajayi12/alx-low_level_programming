#include "main.h"
#include <string.h>
/**
 * _strncat - function that concantenate two string
 * @dest: pointer value
 * @src: pointer value
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
