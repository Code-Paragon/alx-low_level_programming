/**
 * rev_string - function that reverses a string.
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, m = 0, l, k;

	while (s[i] != '\0')
	{
		m++;
		i++;
	}
	for  (l = 0; l <= m; l++)
	{
		k = m - l;
		s[l] = s[k];
	}
}
