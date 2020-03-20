#include "lists.h"

/**
 * print_list - print all elements of a list
 *
 * @h: list to print
 *
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
