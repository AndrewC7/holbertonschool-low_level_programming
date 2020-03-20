#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds node at end of list
 * @head: pointer to pointer h
 * @str: string
 * Return: NULL if fail or address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _sterlen(str);
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

/**
 * _sterlen - string length
 *
 * @s: string
 *
 * Return: string length
 */
int _sterlen(const char *s)
{
	unsigned int count;

	while (s[count])
		count++;
	return (count);
}
