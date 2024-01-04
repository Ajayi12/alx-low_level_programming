#include "main.h"
/**
 * print_diagonal - function that print diagonla line across the terminal
 * @n: integer value of the parameter
 * Result: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			int j = 1;

			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
