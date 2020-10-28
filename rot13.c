#include "holberton.h"

/**
 * rot13 - converts string from ROT13 to normal
 *
 * @ls: input list of args
 *
 * Return: count
 */

int rot13(va_list ls)
{
	char *s = va_arg(ls, char *);
	char *t;
	int i, n, count = 0;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		return (-1);

	for (; s[count] != '\0'; count++)
		;

	t = malloc((sizeof(char *) * count) + 1);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; b[n] != '\0'; n++)
		{
			if (s[i] == b[n])
			{
				t[i] = a[n];
				_putchar(a[n]);
				break;
			}
			if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] >
			 'z'))
			{
				_putchar(s[i]);
				break;
			}
		}
	}
	t[i + 1] = _putchar('\0');
	free(t);
	return (count);
}
