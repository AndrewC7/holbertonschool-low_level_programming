#include "lists.h"

/**
 * dlistint_len - returns number of elements
 *
 * @h: pointer to passed node
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = NULL;

	temp = h;
	while (temp != NULL)
		temp = temp->next;
		len++;

	return (len);
}
