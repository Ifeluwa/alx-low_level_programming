#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array
 * @n: the num of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a{i};
		a[i] = temp;
	}
}
