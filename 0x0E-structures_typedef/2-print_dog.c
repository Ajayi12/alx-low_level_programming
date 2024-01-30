#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the structure
 * Return: Always 0 (success)
 */
void print_dog(struct dog *d)
{
	struct dog *d = malloc(sizeof(struct dog));

	printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
	printf("Age: %f\n", (*d).age ? (*d).age : "(nil)");
	printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
}
