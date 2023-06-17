#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the main function determines the value of a random nuber everytime
 *
 * Return: 0 when exited successfully, otherwise 1
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("pleaxe input a valid number");
	return (0);
}
