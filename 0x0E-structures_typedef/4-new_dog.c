#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *new_dog - Creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: This function creates a new dog
* Return: pointer to new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;
	return (new_dog);
}
