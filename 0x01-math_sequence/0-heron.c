#include <math.h>
#include "heron.h"

/**
 * heron - calculate heron sequence that converges
 * from a root number
 * @p: number evaluated
 * @x0: first guess
 * Return: pointer the first linked list element
 */

t_cell *heron(double p, double x0)
{
	int i = 0;
	t_cell *head = NULL;
	t_cell *new;
	double difference;

	for (difference = 1; difference > 0.0000001; i++)
	{
	difference = ((x0 * x0) - p);
	if (difference < 0)
		difference = difference * -1;
	new = malloc(sizeof(t_cell));
	if (new == NULL)
	{
		return (NULL);
	}
	new->elt = x0;
	new->next = head;
	head = new;
	x0 = (x0 + (p / x0)) / 2;
	}
	return (head);
}
