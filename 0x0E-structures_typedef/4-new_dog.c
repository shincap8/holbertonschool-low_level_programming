#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strcpy - copies a string
* @dest: character des
* @src: character src
*
* Description: this function writes a string in reverse
* Return: it returns a char
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
/**
* _strlen- returns the length of a string
* @s: character s
*
* Description: this function returns the length of a string
* Return: returns i that is the count of the characters in the string|
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
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
	char *newow, *newna;
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog);
	if (new_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		newna = malloc((_strlen(name)) + 1);
		if (newna == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		newna = _strcpy(newna, name);
		newow = malloc((_strlen(owner)) + 1);
		if (newow == NULL)
		{
			free(newna);
			free(new_dog);
			return (NULL);
		}
		newow = _strcpy(newow, owner);
	}
	(*new_dog).name = newna;
	(*new_dog).owner = newow;
	(*new_dog).age = age;
	return (new_dog);
}
