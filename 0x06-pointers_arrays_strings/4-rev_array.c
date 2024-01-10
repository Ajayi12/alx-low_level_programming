#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverse array of integer
 * @a: pointer to the interger value of the parameter
 * @n: interger value of the parameter
 */
void reverse_array(int *a, int n)
{
	int element1, new_length;

	new_length = n - 1;
	element1 = 0;
	while (new_length >= element1)
	{
		printf("%d", a[new_length]);
		if (a[new_length] > 0)
		{
			printf(", ");
		}
		new_length--;
	}
	printf("\n");
}
