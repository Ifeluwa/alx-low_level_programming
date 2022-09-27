#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: address of filled memory
 * @b: constant byte
 * @n: first n bytes
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
