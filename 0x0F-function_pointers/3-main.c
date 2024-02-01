#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that operate base on given operations;
 * @argc: interger value of the parameter
 * @argv: argument of the function
 * Return: Always 0 (success);
 */
int main(int argc, char **argv)
{
	int arg, arg2, result;
	char *arg1 = argv[2];

	arg = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	if (argc != 4)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	if ((*arg1 == '/' || *arg1 == '%') && arg2 == 0)
	{
		fprintf(stderr, "Error\n");
		exit(100);
	}
	result = get_op_func(arg1)(arg, arg2);
	printf("%d\n", result);
	return (0);
}
