/**
 * _putchar - writes to standard output
 * @c: is the param
 *
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

