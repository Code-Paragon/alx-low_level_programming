/**
 * cap_string - function capitalizes all words of a str
 * @a: str
 *
 * Return: char
 */
char *cap_string(char *a)
{
	int i = 1;

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] = a[0] - 'a' + 'A';
	}
	while (a[i] != '\0')
	{
		if ((a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == '\t'
					|| a[i - 1] == ','
			|| a[i - 1] == ';' || a[i - 1] == '.' || a[i - 1] == '!' || a[i - 1] == '?'
			|| a[i - 1] == '"' || a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{'
			|| a[i - 1] == '}') && (a[i] >= 'a' && a[i] <= 'z'))
		{
			a[i] = a[i] - 'a' + 'A';
		}
		i++;
	}
	return (a);
}
