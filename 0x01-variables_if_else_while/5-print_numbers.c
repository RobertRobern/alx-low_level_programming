#include <stdio.h>

/**
 * main - Print single digit numbers of base 10
 *
 * Return: 0 if success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d",num);
	printf("\n");

	return (0);
}
