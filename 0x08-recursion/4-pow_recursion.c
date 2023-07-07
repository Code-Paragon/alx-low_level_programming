/**
 * _pow_recursion - function returns the value of x raised to power y.
 * @y: int
 * @x: int
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
