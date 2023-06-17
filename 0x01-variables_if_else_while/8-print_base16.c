#include <stdio.h>

/**
 * main - print hexa number using putchar
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char alpha = 'a';

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
