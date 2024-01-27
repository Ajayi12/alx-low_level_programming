#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that free memory
 * @grid: pointer to array of pointer of integer value
 * @height: interger value of the parameter
 * Return: Always 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
