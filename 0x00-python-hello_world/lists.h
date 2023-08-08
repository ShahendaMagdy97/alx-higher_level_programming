#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @z: integer
 * @nxt: points to the nxt node
 * Description: singly linked list node struct
 * for Holberton project
 */
typedef struct listint_s
{
	int z;
	struct listint_s *nxt;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int z);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */