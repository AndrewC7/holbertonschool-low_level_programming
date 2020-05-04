#include "lists.h"

/**
 * print_dlistint - prints elements of dlistint_t list
 *
 * @h: pointer to passed node
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = NULL;

	temp = h;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		len++;
	}
	return (len);
}
