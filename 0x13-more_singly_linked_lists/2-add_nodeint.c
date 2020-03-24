#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of list
 *
 * @head: double pointer to head of list
 *
 * @n: data for new node
 *
 * Return: pointer to head (new node)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
