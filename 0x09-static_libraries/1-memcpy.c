#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copy memory area
 * @dest: pointer to the destination of the copied memory
 * @src: pointer to the source of the copied memory
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
