#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of the listint_t list
 * @head:double pointer to the first node
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || **head)
		return 0;
		temp = *head;
		*head = temp->next;
		int n = temp->n;
		free(temp);
		return (n);
	}
}
