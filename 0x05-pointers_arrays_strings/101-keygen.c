#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program generates random valid pass 4 the program 101-crackme
 * Return: 0
 */

int main(void)
{
	int passw[100];
	int i = 0;
	int n;
	int sum = 0;

	srand(time(NULL));

	while (i < 100)
	{
		passw[i] = rand() % 78;

		sum += (passw[i] + '0');

		putchar(passw[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';

			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
