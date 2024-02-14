#include "lists.h"
/**
 * add_node_end - function that add node at the end of a linked lists
 * @head: pointer to pointer of the first node
 * @str: pointer to the character value of the parameter
 * Return: Always 0 success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *nptr;
	int count, i;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count = count + 1;
	}
	nptr = malloc(sizeof(list_t));
	if (nptr == NULL)
	{
		return (NULL);
		free(nptr);
	}
	nptr->str = strdup(str);
	nptr->len = count;
	nptr->next = NULL;
	if (*head == NULL)
	{
		*head = nptr;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = nptr;
	}
	return (nptr);
}
