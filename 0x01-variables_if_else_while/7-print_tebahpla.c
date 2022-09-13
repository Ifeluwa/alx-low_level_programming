#include <stdio.h>
/**
 * main - print in reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int tebahpla;

	tebahpla = 'a';
	while (tebahpla <= 'z')
	{
		putchar(tebahpla);
		tebahpla--;
	}
	putchar('\n');
	return (0);
}
