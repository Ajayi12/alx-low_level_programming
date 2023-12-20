#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the lower and upper case alphabet
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		putchar('\n');
		C++;

	}
	return (0);
}
