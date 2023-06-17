#include <stdio.h>

/**
 * main - putchar nbrs 0~9
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
