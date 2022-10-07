#include <stdio.h>
/**
 * main - prints number of arguemrnts of a program
 *
 * @argc: Number of arguements
 * @argv: pointer to array of arguements
 *
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
