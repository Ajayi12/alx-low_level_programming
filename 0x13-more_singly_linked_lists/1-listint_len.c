#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the first node of the linked list
 * Return: Always 0 (success)
 */
size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	size_t count;

	count = 0;
	temp = (listint_t *)h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
