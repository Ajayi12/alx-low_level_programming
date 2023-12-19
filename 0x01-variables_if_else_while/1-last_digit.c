#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the last digit of a random number
 * Return: Alway 0 (sucess)
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	if (c < 6 && c != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, c);
	}
	else if (c == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, c);
	}
	else
	{
		printf("last digit of %d is %d and is greater than 5\n", n, c);
	}
	
	return (0);
}
