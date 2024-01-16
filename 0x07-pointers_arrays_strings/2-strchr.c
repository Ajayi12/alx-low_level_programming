#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the character value of the parameter
 * @c: character value of the parameter
 */
char *_strchr(char *s, char c)
{
	char *result = strchr(s, c);
	return (result);
}
