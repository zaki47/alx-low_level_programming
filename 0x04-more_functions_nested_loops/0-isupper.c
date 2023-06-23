#include "main.h"
#include <ctype.h>
/**
 * _isupper - check upper letter
 * @c: The character to check
 *
 * Return: On Upper 1 and 0 on lower
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
