#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head node
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *yes = head;
	listint_t *no = head;

	if (!head)
		return (NULL);

	while (no && yes && yes->next)
	{
		yes = yes->next->next;
		yes = no->next;
		if (yes == no)
		{
			no = head;
			while (no != yes)
			{
				no = no->next;
				yes = yes->next;
			}
			return (yes);
		}
	}

	return (NULL);
}
