#include <stdlib.h>
#include "dog.h"

/**
 * make_copy - Function that make a copy of passed in argument
 * @src: Pointer to make copy
 * Return: pointer
 */

char *make_copy(char *src)
{
	char *ptr;
	int i, len = 0;

	if (src == NULL)
	{
		return (NULL);
	}

	while (src[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Function that creates a new dog
 * @name: pointer to name of dog
 * @age: age of the dog
 * @owner: pointer to wner of the dog
 * Return: Pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}

	new_name = make_copy(name);
	if (new_name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	puppy->name = new_name;

	puppy->age = age;

	new_owner = make_copy(owner);
	if (new_owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	puppy->owner = new_owner;

	return (puppy);
}
