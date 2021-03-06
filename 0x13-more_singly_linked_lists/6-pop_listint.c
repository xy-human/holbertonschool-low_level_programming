#include "lists.h"

/**
 * pop_listint - delete head of nodes
 * @head: double pointer to head of nodes
 * Return: Value of n in node (*head)->n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int cpN = 0;

	if (!temp)
		return (0);

	cpN = temp->n;
	temp = temp->next;

	free(*head);
	*head = temp;
	return (cpN);
}
