#include"mani.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @c: input of the function
 *
 * Return: always 0
*/

int _abs(int c)
{
	if (c < 0)
		c = (-1) * c;
	return (c);
}
