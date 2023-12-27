#include <stdio.h>
/**
 * main - program that print all possible combinations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 100)
	{
		if (a < 10)
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
