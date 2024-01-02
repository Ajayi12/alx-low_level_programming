#include "main.h"
/**
 * times_table - function that print the multiplication table 9
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int c, i, j;

	c = 0;
	while (c <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			j = i * c;
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			if (i != 9)
			{
				_putchar(',');
				if (j >= 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			i++;
		}
		_putchar('\n');
		c++;
	}
}
