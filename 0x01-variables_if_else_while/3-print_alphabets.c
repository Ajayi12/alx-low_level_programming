#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the lower and upper case alphabet
 * Return: Always 0 (sucess)
 */
int main()
{
	char c;
	char C;
	c = 'a';
	C = 'A';
	while (c <= 'z' && C <= 'Z')
	{
		putchar(c);
		putchar(C);
		putchar(' ');
		c++;
		C++;
	}
}
