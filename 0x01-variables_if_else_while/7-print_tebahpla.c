#include <stdio.h>

/**
 * main - using putchar print alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char ahpla = 'z';

	for (ahpla = 'z'; ahpla >= 'a'; ahpla--)
	{
		putchar(ahpla);
	}
	putchar('\n');
	return (0);
}
