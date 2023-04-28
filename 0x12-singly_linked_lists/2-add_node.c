#include "lists.h"

/**
 * add_node -function that add new node.
 * @str: the string
 * @head: the head
 * Return: Always i (Success)
*/

list_t *add_node(list_t **head, const char *str)
{
	char *st;
	int lent = 0;
	list_t *new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	st = strdup(str);

	if (st == NULL)
	{
		free(new);
		return (NULL);
	}
	while (cursor != NULL)
	{
		if (cursor->str != NULL)
			printf("[%d] %s\n", cursor->len, cursor->str);
		else
			printf("[0] (nil)\n");
		i++;
		cursor = cursor->next;
	}
	while (str[lent])
		lent++;

	new->str = st;
	new->lent = lent;
	new->next = *head;

return (i);
}
