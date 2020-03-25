#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in list
 *
 * @head: pointer to head
 *
 * @index: node index
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (!head)
		return (NULL);

	for (count = 0; head; count++)
	{
		if (count == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
