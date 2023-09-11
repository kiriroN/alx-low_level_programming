#include <stdio.h>
/**
 * main - entry point
 * description; 'print number of base 10 using putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar ('\n');
	return (0);
}
