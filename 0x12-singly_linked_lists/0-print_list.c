#include "lists.h"
/**
 * print_list - function that  prints all the elements of a list_t list
 * @h: user define data type pointer to the first node of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	struct list_s *temp;
	size_t count;

	count = 0;
	temp = (struct list_s *) h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
