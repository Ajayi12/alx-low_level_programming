#include "lists.h"
/**
 * add_node - function that add node to head of a linked list
 * @head: pointer to pointer of the first node
 * @str: pointer to character value of the parameter
 * Return: Always (0);
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	int count, i;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count = count + 1;
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}
	ptr->str = strdup(str);
	ptr->len = count;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		temp = *head;
		ptr->next = temp;
		*head = ptr;
	}
	return (ptr);
}
