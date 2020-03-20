#include "lists.h"

/**
 * list_len - returns number of elements in list
 *
 * @h: pointer to str
 *
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
