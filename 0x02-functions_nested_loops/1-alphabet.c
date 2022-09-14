#include <stdio.h>
#include "1main.h"
/**
 * main - entry point (Print the alphabet)
 *
 * Return: 0 always on success
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);

}
