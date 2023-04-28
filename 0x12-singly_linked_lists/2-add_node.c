#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: current position in the list
 * @n: node to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const int n)
{
list_t *newNode;

newNode = *head;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (*head);
}
