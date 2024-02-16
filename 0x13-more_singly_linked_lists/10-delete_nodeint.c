#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index of list
 * @head: pointer to pointer to the first node
 * @index: index of node that should be deleted
 * Return: Always 0 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			prev = temp;
			temp = temp->next;
		}

		prev->next = temp->next;
	}
	free(temp);
	return (1);
}
