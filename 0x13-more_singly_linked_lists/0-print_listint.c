#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elments of a listin_t list
 * @h: pointer to the list_t list
 * Return: number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
