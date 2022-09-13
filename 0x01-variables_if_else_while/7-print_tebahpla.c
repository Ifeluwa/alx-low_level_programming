#include <stdio.h>
/**
 * main - print in reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int tebahpla;

	tebahpla = 'z';
	while (tebahpla >= 'a')
	{
		putchar(tebahpla);
		tebahpla--;
	}
	putchar('\n');
	return (0);
}
