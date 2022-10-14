#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of size size
 *
 * @size: size of the array
 * @c: specfic char
 *
 * Return: NULL if size = 0, and pointer to arry on sucess
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
