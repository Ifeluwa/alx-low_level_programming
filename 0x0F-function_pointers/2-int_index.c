#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: the array
 * @size: size of array
 * @cmp: a pointer the func used to cmp values
 *
 * Return: -1 if size is 0 or no element matches
 *	Otherwise - reurn index of the element that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
