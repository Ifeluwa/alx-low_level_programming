#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes all lowercase to upper
 *
 * @s: string to be changed
 *
 * Return: Upper "S"
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}
	return (s);
}
