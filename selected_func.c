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
		return (-1);

	for (itr = 0; ptr[itr] != '\0'; itr++)
	{
		_putchar(ptr[itr]);
	}
	return (1);
}

/**
 * op_char - prints characters
 * @ls: name of va_list
 * Return: int of printed lenght
 * OR NULL if ptr is NULL, exit 101
 */

int op_char(va_list ls)
{
	char p = va_arg(ls, int);

	if (!p)
		return (-1);

	_putchar(p);
	return (1);
}
/**
 * op_num - This prints a integer and decimal integer to the standard output
 * @ls: name of va_list
 * Return: length
 */
int op_num(va_list ls)
{
	int count = 0;
	int num = va_arg(ls, int);

	if (num == 0)
		_putchar('0');
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num / 10)
		r_len(num);
	count = r_len(num);
	return (count + 1);
}
/**
 * r_len - this gets the lenght of a sting using recursion
 * @n: passing in integer
 * Return: is len
 */
int r_len(int n)
{
	int i, len;

	if (n == 0)
		return (0);
	i = n % 10;
	len = 1 + r_len(n / 10);
	_putchar(i + '0');
	return (len);
}
