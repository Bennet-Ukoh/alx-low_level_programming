#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the list
 * @h: points to the elements to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
