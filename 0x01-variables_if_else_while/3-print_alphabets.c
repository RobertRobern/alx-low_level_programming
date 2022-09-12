#include <stdio.h>

/**
 * main - Print lowercase alphabet and then uppercase
 * 		alphabet in ascending order
 *
 * Return: 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'Z'; letter >= 'A'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
