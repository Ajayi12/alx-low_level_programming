#include "lists.h"
/**
 * list_len - function that return the number of node in a linked list
 * @h: pointer to the first node
 * Return: Always 0 (success)
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count;

	count = 0;
	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
