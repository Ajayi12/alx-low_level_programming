#include "main.h"
/**
 * print_square - function that print square to the terminal
 * @size: integer value of the parameter
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int n;

	n = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n <= size)
		{
			int j = 1;

			while (j <= size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			n++;
		}
	}
}
