#include "lists.h"

/**
 * print_listint - prints all elements of list
 *
 * @h: pointer to head of list
 *
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		if (!h)
			return (0);

		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
