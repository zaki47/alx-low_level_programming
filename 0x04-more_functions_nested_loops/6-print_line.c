#include "main.h"

/**
 * print_line - function print _ n time
 * @n: number of time _ should print
 * Return: int n
 */

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
			while (i <= n)
			{
				_putchar('_');
				i++;
			}
			_putchar('\n');
	}
}
