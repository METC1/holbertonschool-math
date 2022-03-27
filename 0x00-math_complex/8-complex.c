#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg - calculates the complex number
 * from modulus and argument
 * @m: modulus of number (magnitude)
 * @arg: argument of number (direction)
 * @c3: pointer to store de resulting complex number
 * Return: void no return
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
