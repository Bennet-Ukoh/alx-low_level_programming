#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t list
 * @head: points to the first node of the listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
