#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the value of two integers a and b
 * @a: first interger
 * @b: second intenger
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
