#include "holberton.h"

/**
 * conjugate - conjugate a complex number from structure
 * @c: complex number structure
 * Return: conjugated complex nunmber
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;
return (c);
}
