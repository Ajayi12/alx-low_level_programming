#include "main.h"
#include <string.h>
/**
 * leet - function that encoded a string into 1337
 * @str: pointer to character of parameter value
 * Return: Always 0 (success)
 */
char *leet(char *str)
{
	int i, n;
	char *replace = "aeotl";
	char *replace2 = "AEOTL";
	char *replace1 = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (n = 0; replace[n] != '\0'; n++)
		{
			if (str[i] == replace[n] || str[i] == replace2[n])
			{
				str[i] = replace1[n];
				break;
			}
		}
	}
	return (str);
}
