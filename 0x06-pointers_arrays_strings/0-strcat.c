#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/*store length of dest in i variable*/
	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}

	/*concatenate (link) src to dest*/
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	/*terminate the dest string*/
	dest[i] = '\0';

	return (dest);
}
