#include <stdio.h>

/**
 * positive_or_negative - function to check num pos/neg
 * @i : The number to be checked
 * Return: 0
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
