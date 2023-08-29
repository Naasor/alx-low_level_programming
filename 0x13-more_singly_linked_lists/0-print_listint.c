#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head of listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		e++;
		h = h->next;
	}
	return (e);
}
