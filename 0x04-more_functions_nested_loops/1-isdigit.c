#include "main.h"

/**
 * _isdigit - check character is digit or otherwise
 * @c: The character to check
 *
 * Return: On digit 1 otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
