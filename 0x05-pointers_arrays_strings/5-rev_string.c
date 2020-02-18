/**
 * rev_string - Function.
 *
 * @s: Value s
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int p, i, n = 0;
	char new_arr[10000];

	for (p = 0; s[p] != '\0'; p++)
	{
	}

	for (i = (p - 1); s[i] > 0; i--)
	{
		new_arr[n++] = s[i];
	}

	for (p = 0; s[p] != '\0'; p++)
	{
		s[p] = new_arr[p];
	}
	new_arr[n++] = s['\0'];
}
