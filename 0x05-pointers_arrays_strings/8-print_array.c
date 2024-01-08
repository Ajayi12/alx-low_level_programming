#include "main.h"
#include <stdio.h>
/**
 * _array - function that print an array
 * @*a: pointer interger of the parameter
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
