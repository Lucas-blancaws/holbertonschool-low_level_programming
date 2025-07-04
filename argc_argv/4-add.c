#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Checks if a string is a positive integer
 * @s: The string to check
 *
 * Return: 1 if s is a valid positive number, 0 otherwise
 */
int is_positive_number(char *s)
{
	int i;

	if (s[0] == '\0')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - Adds positive numbers from command-line arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
