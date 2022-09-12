#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int alphabet, ALPHABET;

	alphabet = 'a';
	ALPHABET = 'A';

	while (alphabet <= 'z')
		{
		putchar(alphabet);
		alphabet++;
		}
	while (ALPHABET <= 'Z')
		{
		putchar(ALPHABET);
		ALPHABET++;
		}
	putchar('\n');
	return (0);
}
