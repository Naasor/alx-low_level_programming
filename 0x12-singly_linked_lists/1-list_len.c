#include "lists.h"

/**
 * list_len - function that returns number of elements in linked list_t list
 * @h: a pointer to the head node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
