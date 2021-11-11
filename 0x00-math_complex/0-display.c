#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers,
 * followed by a new line.
 * @c: complex number
 */
void display_complex_number(complex c)
{
	char i = '+';

	if (c.im < 0)
	{
		c.im = -(c.im);
		i = '-';
	}
	if (c.re != 0 && c.im != 0)
	{
		if (c.im == 1)
			printf("%.0f %c i\n", c.re, i);
		else
			printf("%.0f %c %.0fi\n", c.re, i, c.im);
	}
	else if (c.im == 0)
		printf("%.0f\n", c.re);
	else if (c.re == 0)
	{
		if (c.im == 1)
			printf("i\n");
		else if (c.im > 1)
			printf("%.0fi\n", c.im);
		else if (c.im < 0)
			printf("%c %.0fi\n", i, c.im);
	}
}
