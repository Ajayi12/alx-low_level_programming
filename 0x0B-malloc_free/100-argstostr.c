#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument to the function
 * @av: argument to the function
 * Return: Always 0 (success)
 */
char *argstostr(int ac, char **av)
{
	int i, j, sum, length;
	char *ptr, *result;

	if (ac == 0 ||  av == 0)
	{
		return (NULL);
	}
	sum = 0;
	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		sum = sum + length;
	}
	sum = sum + ac;
	result = ptr = (char *)malloc(sum);
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: failed to allocate memory\n");
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		if (i < ac)
		{
			*ptr = '\n';
			ptr++;
		}
	}
	*ptr = '\0';
	return (result);
}
