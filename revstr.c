#include "holberton.h"

/**
 * revstr - prints input string in reverse
 *
 * @ls: list of arguments
 *
 * Return: length of string
 */

int revstr(va_list ls)
{
	char *s = va_arg(ls, char *);
	int i = 0, count = 0;

	if (s == NULL)
	{
		s = "(null)";
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		return (6);
	}
	for (; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		count += _putchar(s[i]);

	return (count);
}
