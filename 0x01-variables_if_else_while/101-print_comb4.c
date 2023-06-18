#include <stdio.h>

/**
 * main - print 3 digits with 6 putchar and no char variable
 *
 * Return: 0
 */

int main(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			for (n3 = n2 + 1; n3 < 10; n3++)
			{
			putchar(n1 + 48);
			putchar(n2 + 48);
			putchar(n3 + 48);
				if (n1 != 7 || n2 != 8 || n3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
