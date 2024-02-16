#include "lists.h"
/**
 * print_listint - function that print all the element in listint_t list
 * @h: pointer to the first node of the linked list
 * Return: Always 0 (success)
 */
size_t print_listint(const listint_t *h)
{
	struct listint_s *temp;
	size_t count;

	count = 0;
	temp = (struct listint_s *) h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
