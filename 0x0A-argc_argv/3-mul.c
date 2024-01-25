#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiply two number
 * @argc: argument to function main
 * @argv: argument to function main
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int mul, i;

	mul = 1;
	if (argc == 1)
	{
		printf("Error\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
