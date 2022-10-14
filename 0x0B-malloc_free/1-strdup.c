#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string using malloc
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	int index;
	char *dupstr;
	int len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dupstr = malloc(sizeof(char) * (len + 1));
	
	if (dupstr == NULL)
		return 	(NULL);

	for (index = 0; str[index]; index++)
		dupstr[index] = str[index];

	dupstr[len] = '\0';

	return (dupstr);
}
