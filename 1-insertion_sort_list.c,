#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to list to sort
 * Return: nothing void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *after;

	if (list == NULL || *list == NULL)
		return;

	after = (*list)->next;

	while (after != NULL)
	{
		while (after->prev && after->prev->n > after->n)
		{
			after->prev->next = after->next;
			if (after->next)
				after->next->prev = after->prev;
			after->next = after->prev;
			after->prev = after->next->prev;
			after->next->prev = after;

			if (after->prev == NULL)
				*list = after;
			else
				after->prev->next = after;

			print_list(*list);
		}
		after = after->next;
	}
}
