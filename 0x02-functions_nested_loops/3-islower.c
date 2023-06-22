#include <stdio.h>
#include "main.h"
/**
 * _islower - return 1 if the char is a lowercase / 0 otherwise.
 * 
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
