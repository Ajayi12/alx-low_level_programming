#include "main.h"
/**
 * void print_numbers - functions that print digits
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
