#include "main.h"

/**
 * print_last_digit -  function prints the last digit of a num
 * @n: int number
 * Return: the last dig
 */
 
int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
	{
		m *= -1;
	}
	_putchar(m + 48);
	return (m);
}
