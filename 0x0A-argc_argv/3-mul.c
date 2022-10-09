#include "main.h"

/**
 * main - Program that multiplies two numbers.
 * @argc: The number of arguments passed
 * @argv: The array pointer to a string
 *
 * Return: 0 if success and 1 if Error
 */
int main(int argc, char **argv)
{
	int num1, num2, mult;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mult = num1 * num2;

	printf("%d\n", mult);

	return (0);

}
