#include <stdio.h>
#include <math.h>
#include "rectangle.h"

/**
 * rectangle_method - returns the estimate of the integral of the
 * function dx / (1 - x2) using the Rectangle Method.
 * @a: beggining of the interval, we know in advance that is set to 0.
 * @b: end of the interval
 * @steps: number of rectangles to use
 * Return: sum of the rectangles areas.
 */
double rectangle_method(double a, double b, int steps)
{
	int i;
	double area = 0, x = a, y, dx = (b - a) / steps;

	for (i = 1 ; i < steps + 1 ; i++)
	{
		y = 1 / (1 + (x * x));
		area += (dx * y);
		x += dx;
	}
	return (area);
}
