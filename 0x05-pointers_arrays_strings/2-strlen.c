#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string to get the length of.
 *
 * Return: The length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
