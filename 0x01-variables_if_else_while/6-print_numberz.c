#include <stdio.h>
/**
 * main - program that print base 10 numbers using putchar command
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
