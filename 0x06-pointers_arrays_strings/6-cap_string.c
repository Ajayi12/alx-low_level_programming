#include "main.h"
#include <ctype.h>
/**
 * cap_string - function that capitalize the first letter of word in string
 * @str: pointer to character value of the parameter
 * Return: Always 0 (success)
 */
char *cap_string(char *str)
{
	int firstchar = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (isspace((unsigned char)str[i]) || ispunct((unsigned char)str[i]))
		{
			firstchar = 1;
		}
		else if (firstchar)
		{
			str[i] = toupper((unsigned char)str[i]);
			firstchar = 0;
		}
		i++;
	}
	return (str);
}
