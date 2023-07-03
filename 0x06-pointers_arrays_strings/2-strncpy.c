/**
 * _strncpy -  a function that copies a string.
 * @dest: string
 * @src: string
 * @n: int
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, m = 0, k, l;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[m] != '\0')
	{
		m++;
	}
	l = i;
	if ((m + 1) < n)
	{
		for (k = 0; k <= (n - 1); k++)
		{
			if (l <= ((m - 1) + i))
			{
				dest[l] = src[k];
				l++;
			}
			else
			{
				dest[l] = '\0';
				l++;
			}
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
