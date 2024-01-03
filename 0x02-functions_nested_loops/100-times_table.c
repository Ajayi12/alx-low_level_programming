#include "main.h"
/**
 * print_times_table - functions that print times table of any given number
 * @n: interger value of the parameter 
 * Return: Always 0 (success)
 */
void print_times_table(int n)
{
        int i, j;

        i = 0;
        while (i <= n)
        {
		j = 0;
                if (n > 15 || n < 0)
                {
                        return;
                }
                while (j <= n)
		{
			int multi = i * j;
			
			if (j != 0)
			{
				if (multi > 99)
                                {
                                        _putchar(' ');
                                }
                                else if (multi > 9)
                                {
                                        _putchar(' ');
                                        _putchar(' ');
                                }
                                else
                                {
                                        _putchar(' ');
                                        _putchar(' ');
                                        _putchar(' ');
                                }
			}
			if (multi > 99)
			{
				_putchar((multi / 100) + '0');
                                _putchar(((multi % 100) / 10) + '0');
                                _putchar(((multi % 100) % 10) + '0');
			}
			else if (multi > 9)
			{
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else
			{
				_putchar(multi + '0');
			}
			if ( j != n)
			{
				_putchar(',');
			}
			j++;
                }
		_putchar('\n');
		i++;
        }
}
