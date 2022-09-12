#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse using putchar
 *
 * Return: 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
