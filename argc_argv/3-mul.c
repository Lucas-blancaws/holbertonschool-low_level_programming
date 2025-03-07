#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: nb argument
 * @argv: tableau argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
