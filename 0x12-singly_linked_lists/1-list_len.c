#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - check the code
 * @h: name of list
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
