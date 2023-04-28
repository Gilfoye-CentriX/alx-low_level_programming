#ifndef _lists_h_
#define _lists_h_
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */

typedef struct list_s
{
int n;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const int n);

list_t *add_node_end(list_t **head, const int n);

void free_list(list_t *head);

void free_list2(list_t **head);

#endif /* _lists_h_ */
