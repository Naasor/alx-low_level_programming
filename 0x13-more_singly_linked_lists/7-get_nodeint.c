#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to head node
 * @index: is the index of the node, starting at 0
 * Return: the node if does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp;

	temp = head;
	while (x != index && temp != NULL)
	{
		x++;
		temp = temp->next;
	}

	if (x != index)
		return (NULL);
	return (temp);
}
