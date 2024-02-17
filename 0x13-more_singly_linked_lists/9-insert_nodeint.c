#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a position
 * @head: pointer to pointer to the first node of the linked list
 * @idx: index of the list where the node should be added
 * @n: value of the parameter
 * Return: Always 0 (success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int i;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	temp = *head;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
		}
		ptr->next = temp->next;
		temp->next = ptr;
		return (ptr);
	}
	return (NULL);
}
