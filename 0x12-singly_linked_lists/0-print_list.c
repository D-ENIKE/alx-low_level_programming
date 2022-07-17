#include "lists.h"

/**
 * print_list- a funtion that list all elements of list_t
 * @h: The list_t list
 * Return: the number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t count  = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
