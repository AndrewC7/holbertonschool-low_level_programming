#include "lists.h"
/**
 * add_nodeint_end -  adds node at end of list
 *
 * @head: double pointer to head of list
 *
 * @n: data to add to node
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == '\0')
	{
		*head = new_node;
		return (*head);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
