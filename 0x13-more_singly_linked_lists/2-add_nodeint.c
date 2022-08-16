#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node at the beginning of listint_t linked list
 * @h: points to the pointer of listin_t list
 *
 * Return: address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
