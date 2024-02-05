#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers, followed by new line
 * @separator: char value of the parameter;
 * @n: unsigned int value of the parameter
 * ...: values of the parameter
 * Return: Always 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int value;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, int);
		printf("%d", value);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
