#include "holberton.h"
#include <math.h>

/**
 * argument - calculate argument of a complex number from structure
 * @c: complex number structure
 * Return: argument of complex nunmber
 */
double argument(complex c)
{
	double argument;

	argument = atan(c.im / c.re);

return (argument);
}
