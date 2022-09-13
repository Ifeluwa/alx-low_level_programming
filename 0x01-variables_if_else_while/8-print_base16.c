#include <stdio.h>
/**
 ** main - Prints all the numbers of base 16 in lowercase.
 **
 ** Return: 0 always (Success)
 **/
int main(void)
{
	int digit;
	char letters;

	digit = 0;
	while (digit <= 9)
	{
		putchar(digit);
		digit++;
	}

	letters = 'a';
	while (letters <= 'f')
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
