#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @n: node to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const int n)
{
list_t *newNode, *currentNode;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (*head);
}
currentNode = *head;
while (currentNode->next != NULL)
currentNode = currentNode->next;
currentNode->next = newNode;
return (*head);
}
