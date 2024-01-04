#include "main.h"
/**
 * print_triangle - function that print triangle
 * @size: integer value of the parameter
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row;

		row = 1;
		while (row <= size)
		{
			int space = size - row;
			int has1 = row;

			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			while (has1 > 0)
			{
				_putchar(35);
				has1--;
			}
			_putchar('\n');
			row++;
		}
	}
}
