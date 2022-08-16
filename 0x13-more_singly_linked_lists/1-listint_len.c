#include "lists.h"

/**
 * listint_len - prints number of elements in the linked listint_t list
 * @h: points to the linked list to be printed
 *
 * Return: number of elements in the linked listint_t list
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
