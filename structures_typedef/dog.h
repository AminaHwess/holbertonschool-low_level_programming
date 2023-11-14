#ifndef DOG
#define DOG
#include <stdio.h>
/**
 * struct dog - check the code
 *@name : char
 *@age : float
 *@owner : char
 * Return: Always 0.
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
#endif /* DOG */
