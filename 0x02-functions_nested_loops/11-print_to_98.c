#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line.
 * @n: Starting number
 *
 * Return: Numbers separated by space and comma
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;

			printf(", ");
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;

			printf(", ");
		}
	}
	printf("\n");
}
