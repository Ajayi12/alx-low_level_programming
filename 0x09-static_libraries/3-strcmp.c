#include "main.h"
#include <string.h>
/**
 * _strcmp - function that compare two string
 * @s1: pointer to the parameter value
 * @s2: pointer to the parameter value
 * Return: Always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
