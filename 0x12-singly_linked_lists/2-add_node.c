#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: string needed to be duplicated
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
