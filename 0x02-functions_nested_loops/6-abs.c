#include"mani.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: input of the function
 *
 * Return: always 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
