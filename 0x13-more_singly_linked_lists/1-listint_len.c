#include "lists.h"

/**
 * listint_len - prints number of elements in the list
 * @h: points to the list to be printed
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
