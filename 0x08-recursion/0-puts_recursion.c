#include "main.h"
/**
 * _puts_recursion - function that prints a string with new line
 * @s: pointer to the character value of the parameter
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
