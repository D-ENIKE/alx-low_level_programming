#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(count char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 *add_node - adds a new node at the begining
 *@head: linked list
 *@str: data for new mode
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t *head, const char *str)
{
	list_t *new_mode; /*create new node */

	if (str == NULL) /*validate input */
		return (NULL)
	if (strdup(str) == NULL) /* check if strdup malloc errored */
		return (NULL);

	new_node = malloc(sizeof(list_t); /* malloc for new mode */
	if (new_mode == NULL)
		return (NULL);

	new_node->str = strdup(str); /* set node values */
	new_node->len = _strlen(str);

	if (head == NULL) /* set whate new node points to first */
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_mode; /*set head to point to new node*/

	return (new_node);
}
