#include "3-calc.h"
/**
 * main - function that operate base on given operations;
 * @argc: interger value of the parameter
 * @argv: argument of the function
 * Return: Always 0 (success);
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int) = get_op_func(argv[2]);

	if (operation == NULL)
	{
		fprintf(stderr, "Error\n");
		exit(99);
	}
	if (argc != 4)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		fprintf(stderr, "Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}
