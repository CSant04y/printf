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
	int itr;

	if (!ptr)
	{
		exit(100);
		return (0);
	}

	for (itr = 0; ptr[itr] != '\0'; itr++)
	{
		_putchar(ptr[itr]);
	}
	return (1);
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

	printf("we made it!");
	if (!ptr)
	{
		exit(101);
		return (0);
	}

	_putchar(*ptr);
	return (1);
}
