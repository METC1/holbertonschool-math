#include "holberton.h"
#include <math.h>

/**
 * modulus - conjugate a complex number from structure
 * @c: complex number structure
 * Return: conjugated complex nunmber
 */
double modulus(complex c)
{
	double modulus;
	
	modulus = sqrt((c.re * c.re) + (c.im * c.im));
	
return (modulus);
}
