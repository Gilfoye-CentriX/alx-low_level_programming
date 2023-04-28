#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t a;

for (a = 0; h; a++)
{
printf("%d\n", h->n);
h = h->next;
}
return (a);
}
