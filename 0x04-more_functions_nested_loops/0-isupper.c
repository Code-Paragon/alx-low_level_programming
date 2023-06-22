/**
 * _isupper - evaluates a char on if a uppercase
 * @c: the char to be evaluated
 *
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	char i;
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}
}
