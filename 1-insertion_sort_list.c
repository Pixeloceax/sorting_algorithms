#include "sort.h"
/**
 *insertion_sort_list - function
 *@list: V
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *j;
	listint_t *k = *list;
	listint_t *i = *list;

	if (k == NULL)
	{
		k = NULL;
	}
	k = k->next;
	while (k != NULL)
	{
		i = k;
		k = k->next;
		while (i->prev != NULL && i->n < i->prev->n)
		{
			if (i->next != NULL)
			{
				i->next->prev = i->prev;
			}
			if (i->prev->prev != NULL)
			{
				i->prev->prev->next = i;
			}
			else
			{
				*list = i;
			}
			i->prev->next = i->next;
			i->next = i->prev;
			j = i->prev->prev;
			i->prev->prev = i;
			i->prev = j;
			print_list(*list);
		}
	}
}
