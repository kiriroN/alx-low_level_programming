#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print if number is positive, zero or negative
 *
 * Return: Always (Success)
 *
 */

int main(void)

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
        printf("%d is pisitive\n", n);
	}
        else if (n == 0)
	{
        printf("%d is zero\n", n);
	}
        else
	{
        printf("%d is negstive\n", n);
	}
	return (0);

}