#include <stdio.h>

/**
 * main - Print single digit numbers of base 10 use of putchar
 *
 * Return: 0 if success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('\n');

	return (0);
}
