#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: The string in which the character is searched
 * @c: The character that is searched in the string str.
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; index < sizeof(s); index++)
		if (s[index] == c)
			return (s + index);

	return ('\0');
}

