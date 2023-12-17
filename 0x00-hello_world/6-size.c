#include <stdio.h>
/**
 * main - programs that print the size of data type bytes using sizeof()
 * Return: Always 0 (sucess)
 */
int main(void)
{
	printf("size of an int: %zu bytes\n", sizeof(int));
	printf("size of a char: %zu bytes\n", sizeof(char));
	printf("size of a float: %zu bytes\n", sizeof(float));
	printf("size of a long int: %zu bytes\n", sizeof(long int));
	printf("size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("size of a double: %zu bytes\n", sizeof(double));
	return (0);
}	
