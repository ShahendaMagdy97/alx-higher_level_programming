#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *p2;
	listint_t *prev;

	p2 = list;
	prev = list;
	while (list && p2 && p2->nxt)
	{
		list = list->nxt;
		p2 = p2->nxt->nxt;

		if (list == p2)
		{
			list = prev;
			prev =  p2;
			while (1)
			{
				p2 = prev;
				while (p2->nxt != list && p2->nxt != prev)
				{
					p2 = p2->nxt;
				}
				if (p2->nxt == list)
					break;

				list = list->nxt;
			}
			return (1);
		}
	}

	return (0);
}