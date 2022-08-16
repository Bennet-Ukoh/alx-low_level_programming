#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees listint_t list
 * @head: points to the pointer to the beginning of the the listint_t list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}

}
