#include "main.h"
/**
 * _isupper - prog checks for uppercase character
 * @c: variable text
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
