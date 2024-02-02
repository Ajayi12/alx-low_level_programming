#include "3-calc.h"
/**
 * main - function that print its own opcode
 * @argc: argument to the function main
 * @argv: argument to the function main
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	unsigned char *ptr;
	int number, i;

	ptr = (unsigned char *)main;
	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < number; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
	return (0);
}
