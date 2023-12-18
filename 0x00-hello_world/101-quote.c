#include <stdio.h>
#include <unistd.h>
/**
 * main - program that print word followed by a new line to the standard error
 * Return: Always 1 (failed)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19", stderr);
	return (0);
}
