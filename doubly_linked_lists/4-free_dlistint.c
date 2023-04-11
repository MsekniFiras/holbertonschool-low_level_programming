#include "lists.h"
/**
* free_dlistint - frees a linked dlistint_t list.
* @head: head of the list.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *t;
while (head)
{
t = head->next;
free(head);
head = t;
}
}
