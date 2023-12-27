#include <stdio.h>
/**
 * main - program that print numbers using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 10)
	{
		printf("%d", c);
		c++;
	}
	return (0);
}
