#include "main.h"

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b, c;
	char ch;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		ch = s[b];
		s[b] = s[c];
		s[c] = ch;
	}
}
