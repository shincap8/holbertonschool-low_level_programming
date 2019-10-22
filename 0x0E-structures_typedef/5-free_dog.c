#include "dog.h"
#include <stdio.h>
/**
* free_dog - frees dogs
* @d: structure
*
* Description: This function frees dogs
*/
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).age);
	free((*d).owner);
	free(d);
}
