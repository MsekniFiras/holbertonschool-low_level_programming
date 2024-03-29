#include "lists.h"
/**
* dlistint_len - returns number of elements in a linked list.
* @h: head of the list.
* Return: number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
