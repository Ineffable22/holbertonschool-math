#include "rectangle.h"
#include <stdio.h>
/**
 * rectangle_method - Calculates with rectangle method.
 * @a: first number.
 * @b: second number.
 * @steps: number of steps.
 *
 * Return: The aproximation of the Integral.
 */
double rectangle_method(double a, double b, int steps)
{
	/* b = 1   a = 0 */
	double height = 0;
	double width = ((b - a) / steps);
	double midpoint = a + width;
	double result = 0;
	int i = 0;

	while (i <= steps)
	{
		height = finding_height(midpoint);
		midpoint += width;
		result += (width * height);
		i++;
	}
	return (result);
}

/**
 * finding_height - finds the height.
 * @value: value of the function.
 *
 * Return: The height.
 */
double finding_height(double value)
{
	double result = 0;
	double argument = 0;

	argument = 1 + (value * value);
	result = 1 / argument;
	return (result);
}
