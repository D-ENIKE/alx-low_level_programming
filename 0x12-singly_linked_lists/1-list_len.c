#include "lists.h"

/**
 * list_len - counts the number of nodes
 * @h: to the starting of the list
 *
 * Return: the amount of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
