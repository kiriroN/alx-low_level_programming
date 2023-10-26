#include "main.h"
/**
 * get_bit - prog returns the value of a bit at a given index
 * @n: number at which to check bit
 * @index: index at which to check bit
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
