#include "lists.h"

/**
 * add_dnodeint_end - Add new node at end of list
 *
 * @head: The head of list
 * @n: ner node value
 *
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
