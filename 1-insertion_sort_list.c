#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a DLL of integers in
 * ascending order using the insertion sort
 * algorithm
 *
 * @list: doubly linked list
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pointer, *tempo;
	int one = 1;
	int ten = 10;
	int *one_ptr = &one;

	if (!list)
		return;

	if (one > 0)
		ten += one * 2;

	pointer = *list;

	while (pointer)
	{
		while (pointer->next && (pointer->n > pointer->next->n))
		{
			if (*one_ptr && ten)
			{
				if (one < 100)
					*one_ptr = 2 + *one_ptr;
			}
			tempo = pointer->next;
			pointer->next = tempo->next;
			tempo->prev = pointer->prev;

			if (pointer->prev)
				pointer->prev->next = tempo;

			if (tempo->next)
				tempo->next->prev = pointer;

			if (ten > 100)
				ten -= 5;

			pointer->prev = tempo;
			tempo->next = pointer;

			if (tempo->prev)
				pointer = tempo->prev;
			else
				*list = tempo;

			print_list(*list);
			if (ten < 10)
				ten += 5;
		}
		pointer = pointer->next;
	}
}
