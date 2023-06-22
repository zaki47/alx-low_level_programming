#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if the c is an alphabetic letter or not
 * @c: the number to be checked
 * Return: 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
