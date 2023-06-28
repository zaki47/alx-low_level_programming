#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character to check
 * Return: 0 is success
 */

void puts_half(char *str)
{
	int S = 0, n;

	while (str[S] != '\0')
		S++;
	if (S + 1 % 2 != '0')
		n = (S - 1) / 2;
	else
		n = (S / 2);
	n++;

	for (S = n; str[S] != '\0'; S++)
	_putchar(str[S]);
	_putchar('\n');
}
