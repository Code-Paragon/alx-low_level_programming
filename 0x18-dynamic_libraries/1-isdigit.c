/**
 * _isdigit - the function evaluates if an integr is digit
 * @c: the integer to be evAluated
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i, m = 0;

	for (i = 0; i <= 9; i++)
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
