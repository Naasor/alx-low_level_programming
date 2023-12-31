#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (!head || !*head)
		return (0);

	val = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (val);

}

