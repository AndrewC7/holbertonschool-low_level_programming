#include "lists.h"
/**
 * listint_len - returns number of elements in list
 *
 * @h: pointer to head of list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
