#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: parameter value
 * ...: parameter value
 * Return: Always 0 (success)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, n, j, length;
	char *s;
	char c;
	float f;
	char *sep = "cifs";

	length = strlen(format);
	va_start(args, format);
	n = 0;
	while (format[n] != '\0')
	{
		j = 0;
		switch(format[n])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f =(float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if ( s == NULL)
				{
					printf("(nil)");
				}
				printf("%s", s);
				break;
		}
		while (sep[j] != '\0' && format[n] != format[length - 1])
		{
			if (sep[j] == format[n])
			{
				printf(", ");
				break;
			}
			j++;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
