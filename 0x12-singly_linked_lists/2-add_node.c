#include "lists.h"
#include <string.h>
/**
 * add_node - adds node at beginning of list
 *
 * @head: pointer to start of list
 * @str: string
 *
 * Return: pointer to head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _sterlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
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
