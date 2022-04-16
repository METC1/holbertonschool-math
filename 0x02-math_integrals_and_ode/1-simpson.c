#include <stdio.h>
#include <math.h>
#include "simpson.h"

/**
 * simpson - returns the estimate of the integral of the
 * function dx / (1 - x2) using the Simpson Method.
 * Description: to work properly, steps must be a even number, if not
 * the program still will work.
 * @a: beggining of the interval
 * @b: end of the interval
 * @steps: number of segments to use
 * Return: integral estimate
 */
double simpson(double a, double b, int steps)
{
	double y, x = a, dx, k, simpson = 0;
	int i;

	dx = (b - a) / (double) steps;
	for (i = 1 ; i <= steps + 1 ; i++)
	{
		if (i % 2 == 0)
		{
			k = 4;
		}
		if (i % 2 != 0)
		{
			k = 2;
		}
		if (i == 1 || i == steps + 1)
		{
			k = 1;
		}
		y = 1 / (1 + (x * x));
		simpson += (k * y * dx / 3);
		x += dx;
	}
	return (simpson);
}
