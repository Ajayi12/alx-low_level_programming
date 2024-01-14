#include "main.h"
#include <ctype.h>
/**
 * cap_string - function that capitalize the first letter of word in string
 * @str: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (ispunct((unsigned char)str[i - 1]) || str[i - 1] == ' '
		|| str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}	
	}
	return (str);
}
