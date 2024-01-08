#include "main.h"
#include <string.h>
/**
 * _strcpy - function that copy string
 * @dest - pointer to  interger value of the parameter
 * @src - pointer to array of strings
 * Return: Always 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
	char *result;

	result = strcpy(dest, src);
	return (result);
}
