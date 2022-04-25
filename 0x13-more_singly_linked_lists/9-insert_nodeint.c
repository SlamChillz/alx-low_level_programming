#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to a linked list
 * @idx: integer, position to insert new node
 * @n: integer, n data to assign new node
 *
 * Return: pointer to new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *previous = NULL, *h = *head;

	for ( ; h != NULL; h = h->next, idx--)
	{
		if (idx == 0)
		{
			new = malloc(sizeof(new));
			if (new == NULL)
				return (NULL);
			new->n = n, new->next = h;
			if (previous)
				previous->next = new;
			else
				*head = new;
			break;
		}
		previous = h;
	}
	return (new);
}

