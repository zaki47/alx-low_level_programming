#include <stdio.h>
/**
 * main - use putchar to print alphabet
 *
 * Return: 0
 */

int main(void)
{
char alpha = 'a';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
return (0);
}
