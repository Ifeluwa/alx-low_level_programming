#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies
 *
 * @src: source
 * @dest: destination
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
