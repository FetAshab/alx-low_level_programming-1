#include "lists.h"
/**
 *print_list - prints the list and the size.
 *@h: passed list.
 *
 *Return: the the nodes.
 */
size_t print_list(const  list_t *h)
{
	int i = 0;
	
	while (h)
	{
	if (!h->str)
		printf ("[0] %s\n", "nil");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	i++;
	}
	return (i);
}
