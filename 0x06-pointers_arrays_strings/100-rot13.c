/**
 * rot13 - function that encodes a string using rot13.
 * @a: str
 *
 * Return: str
 */
char *rot13(char *a)
{
	int i, j;
	char g[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; a++)
	{
		for (j = 0; g[j] != '\0'; j++)
		{
			if (a[i] == g[j])
			{
				a[i] = b[j];
			}
		}
	}
	return (a);
}
