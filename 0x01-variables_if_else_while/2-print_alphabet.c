#include <stdio.h>
/**
 * main - use putchar to print alphabet
 *
 * Return: 0
 */

char alpha = 'a';

int main(void)
{
while (alpha <= 'z')
	{
	putchar(alpha);
	putchar('\n');
	alpha++;
	}
return (0);
}
