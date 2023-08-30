#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val = 0;

	if (*head == NULL)
		return (val);

	temp = (*head);
	val = temp->next;
	free(*head);
	*head = temp->next;

	return (val);
}

