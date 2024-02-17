#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the first node of a linked list
 * @index: index of the node
 * Return: Always 0 (success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	if (index == 0)
	{
		return (temp);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				return (NULL);
			}
		}
		return (temp);
	}
	return (NULL);
}
