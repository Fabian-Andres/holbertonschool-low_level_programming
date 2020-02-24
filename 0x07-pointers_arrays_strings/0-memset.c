/**
 * *_memset - Function.
 *
 * @s: Value
 * @b: Value
 * @n: Value
 * Return: Always 0.
 */
char *_memset(char *s, char b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
