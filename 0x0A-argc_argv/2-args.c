#include <stdio.h>
/**
 * main - prints all arguements
 * @argc: number of arguemnts
 * @argv: arguemts
 * Return: (0) always.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
