#include "holberton.h"
#include <math.h>

/**
 * multiplication - calculates the product of 2 complex numbers
 * from structure
 * @c1: complex number structure 1
 * @c2: complex number structure c2
 * @c3: pointer to store de result of c1 x c2
 * Return: void no return
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) - (c1.im * c2.im));
	c3->im = ((c1.re * c2.im) + (c1.im * c2.re));
}
