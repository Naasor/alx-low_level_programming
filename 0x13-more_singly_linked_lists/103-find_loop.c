#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a listint_t linked list
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *no, *yes;

	if (head == NULL || head->next == NULL)
		return (NULL);

	no = head->next;
	yes = (head->next)->next;

	while (yes)
	{
		if (no == yes)
		{
			no = head;

			while (no != yes)
			{
				no = no->next;
				yes = yes->next;
			}

			return (no);
		}

		no = no->next;
		yes = (yes->next)->next;
	}

	return (NULL);
}
