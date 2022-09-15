#include "main.h"

/**
 * _isalpha - Checks if an alphabet is a letter, lowercase or uppercase.
 * @c: Letter, lowercase or uppercase
 *
 * Return: 1 if c is letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
