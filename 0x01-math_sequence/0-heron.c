#include "heron.h"
/**
 * _sqrt - Ejecutes square root
 * @p: number to calculate the root
 *
 * Return: The result of the square root
 */
double _sqrt(double p)
{
	double t = 1;

	while (t * t != p)
		t = (t + (p / t)) / 2;
	return (t);
}

/**
 * heron - Creates The Heron Sequence
 * @p: number to calculate the root
 * @x0: first number of variable
 *
 * Return: The Heron sequence until having convergence
 * with an error less or equal to 10^-7.
 */
t_cell *heron(double p, double x0)
{
	t_cell *node, *head = NULL, *tmp = head;
	double abs = 0;

	if (p < 0 || x0 == 0)
		return (NULL);
	node = malloc(sizeof(t_cell));
	if (node == NULL)
		return (NULL);

	node->elt = x0;
	node->next = NULL;
	head = node;
	abs = (x0 > _sqrt(p)) ? (x0 - _sqrt(p)) : (_sqrt(p) - x0);
	if (abs > 0.0000001)
	{
		head = heron(p, (0.5) * (x0 + (p / x0)));
		tmp = head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (head);
}
