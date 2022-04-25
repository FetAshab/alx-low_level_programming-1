#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new1;

new1 = malloc(sizeof(listint_t));
if(!new1)
return NULL;
new1->n = n;
new1->next = *head;
*head = new1;
return new1;
}
