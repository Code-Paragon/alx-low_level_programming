/**
 * string_toupper - function changes all lower to uppercase.
 * @a: array
 *
 * Return: char
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 'a' + 'A';
		}
		i++;
	}
	return (a);
}
