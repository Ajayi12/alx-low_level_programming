#include <stdio.h>
/**
 * main - program that prints all possible combination of single digit
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		putchar(',');
		c++;
	}
	putchar('\n');
	return (0);
}
