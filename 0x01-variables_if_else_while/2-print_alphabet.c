#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;

	}
	putchar('\n');
	return (0);

}
