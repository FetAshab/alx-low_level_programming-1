#include "lists.h"

/**
<<<<<<< HEAD
 *print_listint - prints the data.
 *@h: parameter passed.
 *
 * Return: the nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
=======
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;
>>>>>>> 63fceca10497d65e69befbb933d044f5789b909d

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
