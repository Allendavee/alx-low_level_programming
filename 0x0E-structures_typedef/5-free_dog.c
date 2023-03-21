#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that free dogs
 * @d: Pointer to dog struct
 * Description: Free memory for struct
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
