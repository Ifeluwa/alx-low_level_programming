#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string on success and NULL in failure
 */
char *str_concat(char *s1, char *s2)
{
	int len, i = 0, j = 0;
	char *twostr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	twostr = malloc(sizeof(char) * len);

	if (twostr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		twostr[j++] = s1[i];

	for (i = 0; i < s2[i]; i++)
		twostr[j++] = s2[i];

	return (twostr);

}
