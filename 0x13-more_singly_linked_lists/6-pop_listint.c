#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to pointer to the first node of a linked lists
 * Return: Always 0 (success)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	temp = *head;
	result = temp->n;
	return (result);
}
