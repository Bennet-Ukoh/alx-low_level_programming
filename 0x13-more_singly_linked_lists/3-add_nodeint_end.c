#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at theend of the listint_t list
 * @head: points to the address of the elements to be printed in the listint_t list
 * @n: integer
 *
 * Return: address of the new element on sucess
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
