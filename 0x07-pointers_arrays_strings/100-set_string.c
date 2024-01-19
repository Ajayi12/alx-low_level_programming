#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to character value of the parameter
 * @to: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
