#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverse array of integer
 * @a: pointer to the interger value of the parameter
 * @n: interger value of the parameter
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
