/**
 * _isupper - evaluates a char on if a uppercase
 * @c: the char to be evaluated
 *
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	char i; int m = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			m = 1;
			break;
		}
		else
			continue;
	}
	return (m);
}
