#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - raised to power
 *
 * @x: number
 * @y: raised to power y
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	else
	{
		res = res * _pow_recursion(x, y - 1);
	}

	return (res);
}
