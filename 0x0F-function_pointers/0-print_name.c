#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats print a name
 * @name: pointer to the character value of the parameter
 * @f: pointer to a function
 * Return: Always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
