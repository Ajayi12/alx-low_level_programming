#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that operate base on given operations;
 * @argc: interger value of the parameter
 * @argv: argument of the function
 * Return: Always 0 (success);
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
