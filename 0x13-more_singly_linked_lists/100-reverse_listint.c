#include "lists.h"

/**
 * reverse_listint - reverses list
 *
 * @head: double pointer to head
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_node = 0, *next_node;

	if (!*head)
		return (0);

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = temp_node;
		temp_node = *head;
		if (!next_node)
			break;
		*head = next_node;
	}
	return (*head);
}
