#include "main.h"
/**
 * positive_or_negative - program that generate and check a random number
 * @i: interger value of the parameter
 * Return: Always 0 (sucess)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
