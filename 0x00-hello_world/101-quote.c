#include <unistd.h>
/**
 * main - program that print word followed by a new line to the standard error
 * Return: Always 1 (failed)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
