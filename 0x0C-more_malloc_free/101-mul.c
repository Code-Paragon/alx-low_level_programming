#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - function multiplies two positive numbers.
 * @argc: int
 * @argv: vect
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	unsigned int result;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (num1 == 0 && num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	result = num1 * num2;
	printf("%u\n", result);
	return (0);
}
