#include "lists.h"

/**
 * add_nodeint - function that adds new node @ beginning of a listint_t list
 * @n: an inter for the new node
 * @head: pointer to the head node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
