#include <stdio.h>
/**
 * main - program that print fibonacci number starting from 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	long long int n, first, second, next;

	first = 0;
	second = 1;
	n = 0;
	while (n <= 50)
	{
		next = first + second;
		printf("%lld, ", next);
		first = second;
		second = next;
		n++;
	}
	printf("\n");
}
