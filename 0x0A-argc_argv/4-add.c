#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - program that adds positive number
 * @argc: argument to the function main
 * @argv: argument to the function main
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int add, i, j;

	add = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
