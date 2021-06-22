#include "lists.h"
/**
 * dlistint_len - returns the length of the dlistint
 * @h: head of dlistint
 * Return: number of elements in dlistint
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t listcount = 0;

	while (h != NULL)
	{
		listcount++;
		h = h->next;
	}
	return (listcount);
}

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: dlistint_t header pointer to pointer
 * @idx: Position where the new node will be inserted
 * @n: new value to insert in the new node
 * Return: adress of the new element or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newP = NULL;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;
	unsigned int i = 0, len = dlistint_len(*h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	newP = malloc(sizeof(dlistint_t));
	if (newP == NULL)
		return (NULL);
	newP->n = n;
	while (temp)
	{
		if (i == idx - 1)
			break;
		else if (i < idx && temp == NULL)
			return (NULL);
		i++;
		temp = temp->next;
	}
	if (idx == len)
		return (add_dnodeint_end(h, n));
	if (len < idx)
		return (NULL);
	newP->next = temp->next;
	newP->prev = temp;
	temp2 = temp->next;
	temp2->prev = newP;
	temp->next = newP;
	return (newP);
}
