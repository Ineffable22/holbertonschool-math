#include "holberton.h"
/**
 * display_complex_number - displays the \
complex numbers,
 * followed by a new line.
 * @c: complex number
 */
double modulus(complex c)
{
	return (sqrt((c.re*c.re)+(c.im*c.im)));
}
