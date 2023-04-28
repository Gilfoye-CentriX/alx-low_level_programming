#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a listint_t list
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
if (head == NULL)
{
return;
}
free_listint(head->next);
free(head);
}
