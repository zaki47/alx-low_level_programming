#include <stdio.h>

/**
 * main - print lower and upper alphabet using putchar
 *
 * Return: 0
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar (upper);
		upper++;
	}
	putchar('\n');

	return(0);
}
