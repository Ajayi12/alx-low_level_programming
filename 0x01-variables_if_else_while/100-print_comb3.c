#include <stdio.h>
/**
 * main - program that prints all possible combination of single digit
 * Return: Always 0 (success)
 */
int main(void)
{
        int c;
	int j;

	c = 0;
	while (c < 10)
	{
		j = c + 1;
		while (j < 10)
		{
			putchar(c + '0');
			putchar(j + '0');
			if ( c != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
