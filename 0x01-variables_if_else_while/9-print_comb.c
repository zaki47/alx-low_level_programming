#include <stdio.h>

/**
 * main - print different num using putchar
 *
 * Return: 0
 */

int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		putchar('0' + nbr);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
}
