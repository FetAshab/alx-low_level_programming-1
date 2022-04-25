#include "lists.h"
/**
 *listint_len - returns the nodes
 *@h: parameter passed(head)
 *
 *return: the number of the nodes
 */ 
size_t listint_len(const listint_t *h)
{
    unsigned int a = 0;
    
while(h)
{
    h = h->next;
    a++;
}
    return a;
}
