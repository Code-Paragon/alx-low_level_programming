#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 * @argv: arr
 * @argc: int
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int c, (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(num1, num2);
	printf("%d\n", c);
	return (0);
}
