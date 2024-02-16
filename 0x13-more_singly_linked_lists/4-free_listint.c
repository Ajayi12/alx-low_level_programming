#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head:pointer to the agrument value of the pointer
 *
 * Return: Always 0 (success)
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *prev;

	temp = head;
	while (temp != NULL)
	{

		prev = temp->next;
		free(temp);
		temp = prev;
	}
}
