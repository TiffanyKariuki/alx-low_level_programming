#include "lists.h"

/**
 * print_listint -prints all the elements of a linked list
 * @h:head of the list
 * Return: the number of nodes
 */

size_t print listint(const listint_t *h)
{
	const listint_t *cursor = h;

	size_t (count = 0);

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += i;
		cursor = cursor->next;
	}
	return (count);
}
