#include "lists.h"
/**
 *print_list - prints the list and the size.
 *@h: passed list.
 *returns: the the nodes.
 */

size_t print_list(const  list_t *h)
{int i;
  while (h)
{
  if (!h->str)
  printf ("[%d] %s", 0, "nil");
  else
  printf("[%d] %s", h->len, h->str);
  h = h->next;
  i++;
}
  return (i);
}
