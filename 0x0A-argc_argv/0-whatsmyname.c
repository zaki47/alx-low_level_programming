#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: integer
 * @argv: array to string
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
