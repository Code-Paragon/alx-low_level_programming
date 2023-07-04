/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: ptr
 * @n: int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int l, k;

	for (l = 0, k = (n - 1); l < k; l++, k--)
	{
		int temp = a[l];
		a[l] = a[k];
		a[k] = temp;
	}
}
