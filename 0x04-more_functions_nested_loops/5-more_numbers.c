#include "main.h"
/**
 * more_numbers - function that print digit multiple times
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int num, c;

	num = 48;
	while (num <= 57)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			c++;
		}
		_putchar('\n');
		num++;
	}

}
