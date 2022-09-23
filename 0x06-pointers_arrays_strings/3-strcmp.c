#include <stdio.h>
#include "main.h"
/**
 * _strcmp - This function compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
