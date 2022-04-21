#include "lists.h"
/**
 *print_list - prints the list and the size.
 *@h: passed list.
 *
 *Return: the the nodes.
 */
size_t print_list(const  list_t *h)
{
	int i;
	
	while (h)
	{
	if (!h->str)
		printf ("[%d] %s\n", 0, "nil");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	i++;
	}
	return (i);
}
