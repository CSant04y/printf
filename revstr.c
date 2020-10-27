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

	if (!s)
		return (-1);
	for (; s[i] != '\0'; i++)
	{
		count++;
	}

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (count);
}
