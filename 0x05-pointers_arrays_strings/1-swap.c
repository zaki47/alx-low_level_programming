#include "main.h"

/**
 * swap_int - function that swap 2 variables
 * @a: variable 1
 * @b: variable 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int var1 = *a;

	*a = *b;
	*b = var1;
}
