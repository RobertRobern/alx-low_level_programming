#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: swap value of two integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
