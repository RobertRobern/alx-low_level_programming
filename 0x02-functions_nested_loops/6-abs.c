#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @i: Holds the integer
 *
 * Return: Absolute value of an integer
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
