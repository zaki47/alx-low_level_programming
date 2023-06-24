#include "main.h"

/**
 * more_numbers - function prints the numbers *10 from 0~14
 * Return: void
 */

void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			{
				_putchar('1');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
