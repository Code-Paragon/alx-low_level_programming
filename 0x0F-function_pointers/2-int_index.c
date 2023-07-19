/**
 * int_index - function that searches for an integer
 * @array: arr
 * @size: int
 * @cmp: ptr
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = (*cmp)(array[i]);
		if (j != 0)
			break;
	}
	if (i == size)
		return (-1);
	else
		return (i);
}
