#include "main.h"

/**
 * _strlen - the length of a string.
 * @s: pinter a string.
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
