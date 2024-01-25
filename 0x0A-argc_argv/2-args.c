#include <stdio.h>
#include "main.h"
/**
 * main - function that print all argument it receives
 * @argc: argument to function main
 * @argv: character argument to function main
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
