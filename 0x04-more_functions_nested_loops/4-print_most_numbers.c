#include "main.h"

/**
 * print_most_numbers - function prints the numbers,0 to 9 no 2;4
 * Return: void
 */

void print_most_numbers(void)
{
	int c;
	
	for (c = 0; c < 10; c++)
	{
		if (c != 2 || c != 4)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
