#include "main.h"
#include <string.h>
/**
 * _strstr - function finds the first occurrence of the substring in a string
 * @haystack: pointer to the character value of the parameter
 * @needle: pointer to the character value of the parameter
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	return (result);
}
