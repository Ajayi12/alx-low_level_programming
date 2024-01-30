#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structures that hold data type
 * @name: member of the struct
 * @age: member 2 of the struct
 * @owner: member 3 of the struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
