/**
 * leet - a function that encodes a string into 1337.
 * @a: str
 *
 * Return: char
 */
char *leet(char *a)
{
	int i, j;
	char *l = 'aAeEoOtTlL';
	char *k = '4433007711';

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == l[j])
			{
				a[i] = k[j];
				break;
			}
			else 
				continue;
		}
	}
	return (a);
}
