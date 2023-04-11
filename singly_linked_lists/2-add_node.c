#include "lists.h"
#include <string.h>
/**
* add_node - adds a new node to the beginning
*		of a list_t list.
* @head: pointer to the head of the list.
* @str: string to be added to the list.
* Return: NULL if fail, otherwise address of new element.
*/
list_t *add_node(list_t **head, const char *str)
{
char *d;
int len;
list_t *n;
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
d = strdup(str);
if (d == NULL)
{
free(n);
return (NULL);
}
for (len = 0; str[len];)
len++;
n->str = d;
n->len = len;
n->next = *head;
*head = n;
return (n);
}
