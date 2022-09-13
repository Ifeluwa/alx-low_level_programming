#include <stdio.h>
/**
 * main - print in reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int tebahpla;

	for (tebahpla = 'a'; tebahpla <= 'z'; tebahpla--)
	{
		putchar(tebahpla);
	}
	putchar('\n');
	return (0);
}
