#include "dog.h"
#include <stdio.h>
/**
* init_dog - initialize a variable of type struct dog
* @d: structure
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner
*
* Description: This function initialize a variable of type struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d)name = name;
		(*d)age = age;
		(*d)owner = owner;
	}
}
