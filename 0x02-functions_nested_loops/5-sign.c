#include "main.h"

/**
 * print_sign - Print the sign of a number.
 * @n: Holds the number
 *
 * Return: 1 if n is greater than zero and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
