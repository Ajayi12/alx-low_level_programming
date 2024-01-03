#include <stdio.h>
/**
 * main - program that print sum the multiple of 3 and 5
 * Return: Always success (0)
 */
int main(void)
{
	int sum, n;

	sum = 0;
	n = 0;
	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	 printf("sum of multiples of 3 and 5: %d is %d\n", n, sum);
	return (0);
}
