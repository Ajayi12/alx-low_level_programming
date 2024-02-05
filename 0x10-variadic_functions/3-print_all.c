#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: parameter value
 * ...: parameter value
 * Return: Always 0 (success)
 */
void print_all(const char * const format, ...)
{
	va_list printall;
	int i, j, n;
	char *s, c;
	float f;

	va_start(printall, format);
	n = 0;
	while (*format)
	{
		switch(format[n])
		{
			case 'c':
				c = (char) va_arg(printall, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(printall, int);
				printf("%d", i);
				break;
			case 'f':
				f =(float) va_arg(printall, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(printall, char *);
				if ( s == NULL)
				{
					printf("(nil)");
				}
				printf("%s", s);
				break;
		}
		while (*format)
		{
			if (format[j] != '\0')
			{
				printf(", ");
			}
			j++;
		}
		n++;
	}
	printf("\n");
	va_end(printall);
}
