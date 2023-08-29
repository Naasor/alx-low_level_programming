#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the addr of head in the listint_len
 * Return: the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
