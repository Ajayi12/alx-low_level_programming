#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that print alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		putchar(' ');
		c++;
	}
	return (0);
}
