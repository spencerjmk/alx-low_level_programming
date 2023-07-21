/**
 * _isupper - check uppercase char
 * @c: the argument
 *
 * Return: 1 for uppercase letter 0 for others
 */
int _isupper (int c)
{
	int a = 0;
	if ( c >= 65 && c <= 90)
	{
		a = 1;
	}
	return a;
}

