#include <stdio.h>
#include "1main.h"
/**
 * main - entry point (Print the alphabet)
 *
 * Return: 0 always on success
 */
int main(void)
{
	int print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		putchar(print_alphabet);
	}
	putchar('\n');

	return (0);

}
