#include "main.h"
/**
 * _length - function that calculate the length of a string
 * @str: pointer to the character value of the parameter
 * Return: Always 0;
 */
int _length(const char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
 * real_value - function that convert string to unsigned int
 * @str: pointer to the character value of the parameter
 * Return: Always 0;
 */
unsigned int *real_value(const char *str)
{
	int length, i;
	unsigned int *real_val;

	length = _length(str);

	real_val = malloc(sizeof(int) * length);
	if (real_val == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		real_val[i] = str[i] - '0';
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (real_val);
}
/**
 * _pow - function that convert binary number to an unsigned int
 * @x: value of the parameter
 * @y: value of the parameter
 * @length: value of the parameter
 * Return: Always 0;
 */
unsigned int _pow(unsigned int x, unsigned int y, unsigned int length)
{
	unsigned int result, i, count;

	count = 1;
	if (x == 0)
	{
		result = 0;
	}
	for (i = 0; i < length; i++)
	{
		result = x * y;
		count = count * result;
	}
	return (count);
}
/**
 * binary_to_uint - function that convert binary number to an unsigned int
i * @b: pointer to the character value of the parameter
 * Return: Always 0;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int *val, real_length, i, count, result, n, length2;

	if (b == NULL)
	{
		return (0);
	}
	real_length = _length(b);
	val = real_value(b);
	count = 0;
	n = 2;

	if (val == NULL)
	{
		return (0);
	}
	for (i = 0; i < real_length; i++)
	{
		length2 = real_length - i - 1;
		if (real_length == 1 || length2 == 0)
		{
			result = _pow(val[i], 1, 1);
		}
		else
		{
			result = _pow(val[i], n, length2);
		}
		count = count + result;
	}
	free(val);
	return (count);
}
