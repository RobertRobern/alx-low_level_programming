#include "main.h"

/**
 * main - Program that adds positive numbers.
 * @argc: The number of arguments passed
 * @argv: The array pointer to a string
 *
 * Return: 0 if success and 1 if Error
 */
int main(int argc, char **argv)
{
	int index, num, sum;

	sum = 0;
	for (num = 1; num < argc; num++)
	{
		for (index = 0; argv[num][index] ; index++)
		{
			if (argv[num][index] < '0' || argv[num][index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[index]);
	}

	printf("%d\n", sum);

	return (0);

}
