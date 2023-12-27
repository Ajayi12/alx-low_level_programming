#include <stdio.h>
/**
 * main - program that print the base 16 number
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 0x0F)
	{
		if (c < 10)
		{
			putchar(c + '0');
		}
		else if (c >= 10)
		{
			putchar(c + 87);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
