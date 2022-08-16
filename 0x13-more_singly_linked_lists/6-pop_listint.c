#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of the listint_t list
 * @head:double pointer to the first node
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head = NULL)
		return 0;
		temp = *head;
		*head = temp->next;
	       	n = temp->n;
		free(temp);
		return (n);
	}
}
