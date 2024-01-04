#include "main.h"
/**
 * print_line - function that print a straight line accross the terminal
 * @n: integer value of the parameter
 * Return: Always 0 (success);
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		if (i != 0 || i < 0)
		{
			_putchar(45);
		}
		i++;
	}
	_putchar('\n');
}
