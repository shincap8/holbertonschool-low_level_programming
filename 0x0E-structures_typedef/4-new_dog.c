#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strncpy - copies a string
* @dest: character dest
* @src: character src
* @n: integer n
*
* Description: this function copies a string
* Return: it returns a char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (src[j])
		j++;
	for (i = 0; i < n; i++)
	{
		if (i >= j)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
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
	int i = 0, j = 0;
	char *newow, *newna;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (name == NULL)
		(*new_dog).name = "";
	else
	{
		while (name[i])
			i++;
		newna = malloc(i + 1);
		if (newna == NULL)
		{
			free(newna);
			free(new_dog);
			return (NULL);
		}
		(*new_dog).name = *_strncpy(newna, name, i);
	}
	if (owner == NULL)
		(*new_dog).owner = "";
	else
	{
		while (owner[j])
			j++;
		newow = malloc(j + 1);
		if (newow == NULL)
		{
			free(newow);
			free(new_dog);
			return (NULL);
		}
		(*new_dog).owner = *_strncpy(newow, owner, j);
	}
	return (new_dog);
}
