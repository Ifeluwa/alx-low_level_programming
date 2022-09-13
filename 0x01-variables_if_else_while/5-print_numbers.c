#include <stdio.h>
/**
 * main - This code will print all single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	digit = '0';
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
