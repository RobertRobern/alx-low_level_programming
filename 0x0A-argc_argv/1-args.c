#include "main.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of arguments passed
 * @argv: The array pointer to a string
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
