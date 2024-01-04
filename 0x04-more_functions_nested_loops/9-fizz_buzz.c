#include <stdio.h>
/**
 * main - program that insert text for every multiple of 3 and 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (n % 3 == 0)
		{
			printf("fizz");
		}
		else if (n % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
		n++;
	}
	printf("\n");
	return (0);
}
