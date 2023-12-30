#include "main.h"
/**
 * main - program that print character
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = "_putchar";
	while (c != '\0')
	{	
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
