#include "lists.h"
/**
* free_dlistint - function that frees a dlistint_t list.
* @head: dlistint_t header pointer
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
