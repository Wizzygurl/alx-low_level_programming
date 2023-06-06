#include "lists.h"

/**
 * add_nodeint - Add new node at start of linked list
 * @head: pointer to FIRST node in the list
 * @n: data to insert in new node
 *
 * Return: pointer to new node, or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

