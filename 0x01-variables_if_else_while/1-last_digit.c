#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 *Description: 'get the last digit of a number'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;

	if (ld > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, ld);
	}

	return (0);
}
