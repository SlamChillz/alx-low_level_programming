#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: pointer to a pointer to the top node
  * @idx: integer, index to insert the new node
  * @n: n data of the new node
  *
  * Return: dlistint_t *, new node or NULL on failure
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL, *currentNode = *h;

	while (currentNode && idx > 0)
		currentNode = currentNode->next, idx--;

	if (idx == 0 && currentNode != NULL)
	{
		newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (newNode == NULL)
			return (NULL);

		newNode->n = n, newNode->prev = NULL, newNode->next = NULL;

		(currentNode->prev)->next = newNode;
		newNode->prev = currentNode->prev;
		newNode->next = currentNode;
		currentNode->prev = newNode;
	}
	return (newNode);
}

