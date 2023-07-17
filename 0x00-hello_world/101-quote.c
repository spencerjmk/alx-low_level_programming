#include <wchar.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * description: writes to file
 * @void: does nothing
 * Return: Always 1 (success)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int str_len = strlen(str);
	int cnt = 0;
	while (1)
	{
		if (cnt == str_len)
		{
			break;
		}
		else
		{
			fputwc(str[cnt], stderr);
		}
		cnt++;
	}
	return (1);
}
