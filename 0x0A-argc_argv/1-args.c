#include <stdio.h>
#include "main.h"
/**
 * main - function that count the number of argument passed to it
 * @argc: argument that count the number of parameter
 * @argv: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
