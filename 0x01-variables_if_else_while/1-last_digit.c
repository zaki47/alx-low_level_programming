#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - compare last digit n<6 or n>5
*
* Return: 0
*/


int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
			printf("Last digit of %d is greater than 5 \n", n);
			else if (lastDigit < 6)
				printf("Last digit of %d is less than 6 and not 0 \n", n);
			else
				printf("Last digit of %d is 0 \n", n);
	}
		return (0);
}
