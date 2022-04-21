#include "lists.h"
/**
 *list_len - counts the item.
 *@h: the item.
 *
 *Return: the size.
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	
	while (h)
	{
		if(h->str)
			h = h->next;
		i++;
	}
	return (i);
}
