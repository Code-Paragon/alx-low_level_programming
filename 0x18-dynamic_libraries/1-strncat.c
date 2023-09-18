/**
 * _strncat -  function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: int
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, m = 0, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[m] != '\0')
	{
		m++;
	}
	if ((m + 1) < n)
	{
		for (k = 0; k <= m; k++)
		{
			dest[i] = src[k];
			i++;
		}
	}
	else
	{
		for (k = 0; k <= (n - 1); k++)
		{
			dest[i] = src[k];
			i++;
		}
	}
	return (dest);
}
