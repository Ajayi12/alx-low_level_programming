#include <stdio.h>
/* init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: pointer to the character value of the parameter
 * @age: float value of the parameter
 * @owner: pointer to the character value of the parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
