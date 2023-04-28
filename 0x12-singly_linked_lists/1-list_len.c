#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list to print
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
size_t a;

for (a = 0; h; a++)
h = h->next;
return (a);
}
