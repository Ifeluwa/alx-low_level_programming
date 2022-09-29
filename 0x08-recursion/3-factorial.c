#include <stdio.h>
#include "main.h"
/**
 * factorial - gives factorial
 *
 * @n: number
 *
 * Return: factorial
 */
int factorial(int n)
{
	int res;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	else
	{
		res = n * factorial(n - 1);
	}

	return (res);
}
