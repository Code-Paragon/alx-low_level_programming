/**
 * rev_string - function that reverses a string.
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, m = 0, l, k;
	char q, r;

	while (s[i] != '\0')
	{
		m++;
		i++;
	}
	for  (l = 0; l <= (m - 1); l++)
	{
		k = (m - 1) - l;
		q = s[l];
		s[l] = s[k];
		s[k] = q;
	}
}
