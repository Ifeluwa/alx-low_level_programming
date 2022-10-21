#include <stdio.h>
#include "dog.h"
/**
 * _strlen - length
 *
 * @str: syring
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string
 *
 * @str: to be copied
 * @dest: destination
 *
 * Return: copied string
 */
char _strcopy(char *str, char *dest)
{
	int index = 0;

	for (index = 0; str[index]; index++)
		dest[index] = str[index];

	dest[index] = '\0';

	return (dest);
}


/**
 * new_dog - creates a new dog.
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo->name == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggot->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
