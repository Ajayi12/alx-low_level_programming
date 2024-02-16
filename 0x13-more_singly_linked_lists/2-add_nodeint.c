#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to pointer of the first node of a linked list
 * @n: interger value of the parameter
 * Return: Always 0 (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	(void)temp;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
