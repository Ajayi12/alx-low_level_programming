#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copy
 * @dest: - pointer
 * @src: - pointers
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
