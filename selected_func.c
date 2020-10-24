#include "holberton.h"

/**
 * op_str - prints strings
 *
 * @ls: va_list
 *
 * Return: int of printed length
 * OR NULL if ptr is NULL, exit 100
 */

int op_str(va_list ls)
{
	char *ptr = va_arg(ls, char *);
	int itr = 0;

	if (!ptr)
	{
		exit(100);
		return (NULL);
	}

	for (itr; ptr[itr] != NULL; itr++)
	{
		_putchar(ptr[itr]);
	}
}

/**
 * op_char - prints characters
 *
 * Return: int of printed lenght
 * OR NULL if ptr is NULL, exit 101
 */

int op_char(va_list ls)
{
	char *ptr = va_arg(ls, char *);

	if (!ptr)
	{
		exit(101);
		return (NULL);
	}

	_putchar(ptr);
}
