#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that create a new dog
 * @name: parameters
 * @age: parameters
 * @owner: parameters
 * Return: Always 0 (success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_one = malloc(sizeof(dog_t));

	if (new_one == NULL)
	{
		return (NULL);
	}
	(*new_one).name = strdup(name);
	(*new_one).age = age;
	(*new_one).owner = strdup(owner);
	if ((*new_one).name == NULL || (*new_one).owner == NULL)
	{
		free((*new_one).name);
		free((*new_one).owner);
		free(new_one);
		return (NULL);
	}
	return (new_one);
}
