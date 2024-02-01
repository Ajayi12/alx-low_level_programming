#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function that return a matching operator
 * @s: pointer to the character value of the parameter
 * Return: Always 0 (success);
 */
int (*get_op_func(char *s))(int, int)
{
	size_t i;
	char operators[] = {'+', '_', '*', '/', '%'};
	int (*operation[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	for (i = 0; i < sizeof(operators) / sizeof(char); i++)
	{
		if (s[0] == operators[i])
		{
			return (operation[i]);
		}
	}
	fprintf(stderr, "Error\n");
	exit(99);
	return (NULL);
}
