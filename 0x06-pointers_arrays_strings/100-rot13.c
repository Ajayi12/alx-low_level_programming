#include "main.h"
#include <string.h>
/**
 * rot13 - function that encodes string using rot13
 * @str: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
char *rot13(char *str)
{
        char *replace = "abcdefghijklmABCDEFGHIJKLM";
	char *newchar = "nopqrstuvwxyzNOPQRSTUVWXYZ";
	int length = strlen(str);
	int length2 = strlen(replace);
	int length3 = strlen(newchar);
	int i = 0;

	while (i <= length)
	{
		int n = 0;
		while (n <= length2)
		{
			int c = 0;
			if (str[i] == replace[n])
			{
				
			}
			n++;
		}
		i++;
	}
	return (str);
}                 
