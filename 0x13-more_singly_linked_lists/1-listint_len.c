#include "lists.h"

/**
 * listint_len - Return number of element in linked lists
 * @h: Transverse linked list of type listint_t
 *
 * Return: Nomba of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

