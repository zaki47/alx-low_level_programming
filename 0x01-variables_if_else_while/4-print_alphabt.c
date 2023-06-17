#include <stdio.h>

/**
 * main - print alphabet low 2 putchar without 'q,e'
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' | alpha == 'q')
		{
		alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
