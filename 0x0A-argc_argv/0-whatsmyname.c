#include <stdio.h>
/**
 * main - prints program name followed by a new line
 *
 * @argc: the num of arguments in the program
 * @argv: pointer to array of arguements
 *
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
