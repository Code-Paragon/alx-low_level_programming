/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @a: array
 *
 * Return: void
 */
void *string_toupper(char *a)
{
	int i = 0, c, l, g = 122, k = 65, j = 90, o,v;

	while (a[i] != '\0')
	{
		c = a[i];
		if ((c >= 97) && (c <= 122))
		{
			v = g - c;
			for (l = 65; l <= 90; l++)
			{
				o = j - k;
				if (v == o)
				{
					a[i] = l;
					break;
				}
			}
		}
		i++;
	}
}
