#include "lists.h"
/**
 * free_list - function that free the dynamic memory allocated to node
 * @head: argument
 * Return: Always 0 (success)
 */
void free_list(list_t *head)
{
	list_t *temp, *prev;

	temp = head;
	while (temp != NULL)
	{
		prev = temp->next;
		free(temp->str);
		free(temp);
		temp = prev;
	}
}
