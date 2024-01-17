#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function that prints chess board
 * @a: pointer to the character value of the parameter
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int n, i;

	for (n = 0; n < 8; n++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[n][i]);
		}
		_putchar('\n');
	}
}
