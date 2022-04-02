#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct node - structure to store in a single linked list the fibonnaci
 * series, until it reaches a geometric behavior
 * @elt: int
 * @next: adress of the next node
 */
typedef struct node
{
	int elt;
	struct node *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
