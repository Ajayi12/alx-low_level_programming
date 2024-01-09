#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenate string
 * @dest: pointer of character data type of the parameter value
 * @src: pointer of character data type of the parameter value
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = strcat(dest, src);
	return (result);
}
