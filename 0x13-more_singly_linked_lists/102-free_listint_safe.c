#include "lists.h"
/**
 * free_listint_safe - function that free the linked list with a loop
 * @h: pointer to pointer to the first node 
 * Return: Always 0 (succes)
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *prev;
	size_t count;

	count = 0;
	temp = *h;
	while (temp != NULL)
	{
		prev = temp;
		free(prev);
		if (temp <= temp->next)
		{
			free(temp);
			break;
		}
		temp = temp->next;
		count++;
	}
	*h = NULL;
	return (count);
}
