#include "holberton.h"

/**
 * display_complex_number - Display a complex number from structure
 * @c: complex number structure
 * Return: void no return just print
 */
void display_complex_number(complex c)
{
	char sign = '+';

	if (c.im < 0)
	{
		sign = '-';
		c.im = c.im * -1;
	}
printf("%.0f %c %.0fi\n", c.re, sign,  c.im);
}
