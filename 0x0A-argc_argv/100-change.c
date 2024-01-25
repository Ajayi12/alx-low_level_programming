#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that print the minimum number of coin
 * @argc: argument to function main
 * @argv: argurment to function main
 * Result: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int length, i, count;
	int div_arr[] = {25, 10, 5, 2, 1};
	div_t result;
	int cents = atoi(argv[1]);

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	count = 0;
	length = sizeof(div_arr) / sizeof(int);
	for (i = 0; i < length; i++)
	{
		result = div(cents, div_arr[i]);
		count += result.quot;
		cents = result.rem;
	}
	printf("%d\n", count);
	return (0);
}
