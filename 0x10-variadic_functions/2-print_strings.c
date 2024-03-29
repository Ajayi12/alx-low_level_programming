#include "variadic_functions.h"
/**
 * print_strings - function that print strings, followed by new line
 * @separator: is the string to be printed between the string;
 * @n: unsigned int value of the parameter
 * ...: other value of the parameters
 * Return: Always 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (*str == '\0')
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
