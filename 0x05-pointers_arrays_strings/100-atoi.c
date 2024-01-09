#include "main.h"
#include <stdlib.h>
/**
 * _atoi - function that convert a string to an interger
 * @s: pointer to character of parameter value
 * Return: Always 0 (success)
 */
int _atoi(char *s)
{
	long int result;
	char *i;

	while (!isdigit(s))
	{
		s++;
	}	
	result = strtoll(s, &i, 10);
	return (result);

}
