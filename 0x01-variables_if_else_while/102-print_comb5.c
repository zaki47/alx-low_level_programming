#include <stdio.h>

/**
 * main - print 2-2 digits with 8 putchar and no char variable
 *
 * Return: 0
 */

int main(void)
{
int n1, n2;

	for (n1 = 0; n1 < 99; n1++)
	{
		for (n2 = n1 + 1 ; n2 < 100; n2++)
		{
			putchar(n1 / 10 + 48);
			putchar(n1 % 10 + 48);
			putchar(' ');
			putchar(n2 / 10 + 48);
			putchar(n2 % 10 + 48);
				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
