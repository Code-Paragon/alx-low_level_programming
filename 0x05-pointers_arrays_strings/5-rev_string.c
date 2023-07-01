/**
 * rev_string - function that reverses a string.
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, m = 0, l, k;

	while (s[m] != '\0')
	{
		m++;
	}

	for (l = 0, k = m - 1; l < k; l++, k--)
	{
	char temp = s[l];
	s[l] = s[k];
	s[k] = temp;
	}
}
