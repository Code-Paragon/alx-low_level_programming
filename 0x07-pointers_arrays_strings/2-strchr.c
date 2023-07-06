/**
 * _strchr -  function locates a char in a str
 * @s: str
 * @c: char
 *
 * Return: ptr
 */
char *_strchr(char *s, char c)
{
	int i = 0, m = 0;
	char *e;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			e = &s[i];
			m++;
			break;
		}
		i++;
	}
	if (m != 0)
	{
		return (e);
	}
	else
	{
		return (0);
	}
}
