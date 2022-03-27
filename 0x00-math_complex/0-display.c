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
	if (c.im == 0)
	{
		printf("%g\n", c.re);
	} else
	{
		if (c.im == 1)
	{
		printf("%g %c i\n", c.re, sign);
	} else
	{
		printf("%g %c %gi\n", c.re, sign,  c.im);
	}
	}
}
