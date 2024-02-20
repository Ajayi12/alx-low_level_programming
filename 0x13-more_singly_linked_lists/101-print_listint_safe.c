#include "lists.h"
/**
 * print_listint_safe - function that print the element of a linked list
 * @head: pointer to the first node of the linked list
 * Return: Always 0 (success)
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp, *nptr;
	size_t count;

	count = 0;
	temp = (listint_t *)head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (temp <= temp->next)
		{
			nptr = temp->next;
			printf("-> [%p] %d\n", (void *)nptr, nptr->n);
			exit(98);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
