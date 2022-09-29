#include <stdio.h>
#include "main.h"
/**
 ** find_sqrt - Finds the natural square root
 ** @num: The number to find the square root of.
 ** @root: The root to be tested
 **
 ** Return: the square root.
 **         If the number does not have a natural square root (-1)
 **/
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - square root
 *
 * @n: number
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	else
	{
		root = find_sqrt(n, root);
	}

	return (root);
}
