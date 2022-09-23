#include <stdio.h>
#include "main.h"
/**
 * _strncat - Concatenates a spefic num of char from src string to dest string
 * @dest: destination string
 * @src: source strin
 * @n: num of char
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
