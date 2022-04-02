#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
	double elt;
	struct node *next;
} t_cell;
t_cell *heron(double p, double x0);
#endif
