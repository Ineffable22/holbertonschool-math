#include "rectangle.h"
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
	double height = 0, width = 0, midpoint = 0, result = 0;
	int i = 0;
	double difference = 0;

	if (steps < 0)
		return (0);
	difference = checker(a, b);
	width = (difference / steps);
	midpoint = a + width;
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

/**
 * checker - Calculates with rectangle method.
 * @a: first number.
 * @b: second number.
 *
 * Return: The difference between a and b.
 */
double checker(double a, double b)
{
	double difference = 0;

	if (a >= 0 && b >= 0 && b > a)
		difference = b - a;
	if (a >= 0 && b >= 0 && a > b)
		difference = a - b;
	if (a <= 0 && b <= 0 && b > a)
		difference = b - a;
	if (a <= 0 && b <= 0 && a > b)
		difference = a - b;
	if (a >= 0 && b <= 0)
		difference = a + (-b);
	if (a <= 0 && b >= 0)
		difference = b + (-a);
	return (difference);
}
