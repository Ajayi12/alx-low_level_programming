#include "main.h"
/**
 * print_to_98 - program that print number to 98
 * @n: interger value to use in the operation
 * Return 0 (success)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
			{	
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0'); 
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
                                _putchar((n % 10) + '0');
                                _putchar(',');
                                _putchar(' ');
			}
			n--;
		}
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 10)
			{
				if (n < 0)
				{
					if (n > -10)
					{	
						_putchar('-');
						_putchar('0' - (n % 10));
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar('-');
						_putchar('0' - (n / 10));
                                                _putchar('0' - (n % 10));
                                                _putchar(',');
                                                _putchar(' ');
					}
				}
				else
				{
                                        _putchar(n + '0');
                                        _putchar(',');
                                        _putchar(' ');
				}
			}	
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
