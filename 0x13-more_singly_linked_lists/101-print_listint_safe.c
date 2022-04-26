#include "lists.h"

/**
 * print_listint_safe - print a linked list
 * @head: pointer to the head node of a linked list
 *
 * Return: size_t, number of nodes in the list or 98, if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;
	const listint_t *hold;

	current = head;
	if (current == NULL)
		exit(98);

	count = 0;
	while (current != NULL)
	{
		hold = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}

