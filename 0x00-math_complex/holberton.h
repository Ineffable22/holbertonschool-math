#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
 * struct Complex - a dog's basic info
 * @re: First member
 * @im: Second member
 *
 * Description: Longer description
 */
typedef struct Complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif
