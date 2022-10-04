#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: This is the main C string to be scanned
 * @accept: This is the C string containing the characters to match
 *
 * Return: a pointer to the character in s that matches one of
 * the characters in accept, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index;

	for (; *s; s++)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
	}

	return ('\0');
}
