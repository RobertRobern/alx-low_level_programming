#include "main.h"

/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: An array where src will be copied to.
 *@src: The string to be copied.
 *@n: The number of characters to copy.
 *
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0;  index < n; index++)
		dest[index] = src[index];

	return (dest);
}
