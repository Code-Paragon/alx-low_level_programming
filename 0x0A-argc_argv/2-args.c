#include <stdio.H>
/**
 * main - main func
 * @argc: int
 * @argv: vtr
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i])
	}
	return (0);
}
