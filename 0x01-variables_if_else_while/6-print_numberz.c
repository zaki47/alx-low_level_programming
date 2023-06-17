#include <stdio.h>

/**
 * main - putchar nbrs 0~9
 *
 * Return: 0
 */

int main(void)
{
	char num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
