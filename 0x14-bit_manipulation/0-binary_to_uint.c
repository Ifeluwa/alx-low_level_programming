#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to int
 *
 * @b: the binary number
 *
 * Return: coverted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!*b)
		return (0);
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		res <<= 1;
		if (*b & 1)
			res += 1;
		b++;
	}
	return (res);
}
