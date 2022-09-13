#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int alphabt;

	alphabt = 'a';
	while (alphabt <= 'z')
	{
		if (alphabt == 'e')
		{
		}
		else
			if (alphabt == 'q')
			{
			}
			else
				putchar(alphabt);
		alphabt++;
	}
	putchar('\n');
	return (0);
}
