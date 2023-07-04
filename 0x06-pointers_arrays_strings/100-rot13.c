/**
 * rot13 - function that encodes a string using rot13.
 * @a: str
 *
 * Return: str
 */
char *rot13(char *a)
{
	int i, j;

	for (i = 0; a[i] != '\0'; a++)
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
			a[i] = a[i] + 13;
		}
	}
	return (a);
}
