#include "lists.h"

/**
 * pop_listint - deletes head node
 *
 * @head: double pointer to head
 *
 * Return: deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int temp_data = 0;

	if (!head  || !(*head))
		return (0);

	temp_node = (*head)->next;
	temp_data = (*head)->n;
	free(*head);
	*head = temp_node;

	return (temp_data);
}
