#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: destination string
 * @src: soure string
 * @n: num of char copied from string
 *
 * Return: copied strin g
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
