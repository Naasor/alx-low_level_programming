#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: a pointer to the head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count += 1;
	}
	return (count);
}
