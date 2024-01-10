#include "main.h"
#include <string.h>
/**
 * leet - function that encoded a string into 1337
 * @str: pointer to character of parameter value
 * Return: Always 0 (success)
 */
char *leet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 52;
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 51;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 48;
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 55;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 49;
		}
		i++;
	}
	return (str);
}
