#include <stdio.h>
/**
 * main - program that print the name of the file it was compiled from
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
