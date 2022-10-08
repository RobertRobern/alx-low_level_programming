#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments passed
 * @argv: The array pointer to a string
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
