#include "_putchar"

/**
 * main - This is used to print a string with out any standard library functions
 *
 * Return: 0 upon successful run
 */
int main(void)
{
	const char *str = "_putchar";
	int i;
	for(i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
