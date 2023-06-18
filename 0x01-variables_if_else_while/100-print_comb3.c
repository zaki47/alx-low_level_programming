#include <stdio.h>

/**
 * main - print 2 digits with 5  putchar and no char variable
 *
 * Return: 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar(n1 + 48);
			putchar(n2 + 48);
			if (n1 != 8 || n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
