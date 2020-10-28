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
	int i = 0, count = 0, itr2 = 0, itr;
	char *store;

	if (s == NULL)
	{
		s = "(null)";
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		return (-1);
	}
	for (; s[i] != '\0'; i++)
		count++;
	store = malloc((sizeof(char) * count) + 1);
	if (!store)
	{
		free(store);
		return (-1);
	}

	for (itr = count; itr >= 0; itr--, itr2++)
	{
		store[itr2] = s[itr];
	}

	store[itr2 + 1] = '\0';

	for (itr = 0; itr <= count; itr++)
		_putchar(store[itr]);

	free(store);
	return (count);
}
