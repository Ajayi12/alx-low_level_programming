#include <stdio.h>
/**
 * main - program tha print it name followed by a new line
 * @argc: arguments to function
 * @argv: arguments to function
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
