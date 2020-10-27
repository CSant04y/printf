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

	if (ptr == NULL)
		ptr = "(null)";
	for (itr = 0; ptr[itr] != '\0'; itr++)
	{
		_putchar(ptr[itr]);
	}
	return (itr);
}

/**
 * op_char - prints characters
 * @ls: name of va_list
 * Return: int of printed lenght
 * OR NULL if ptr is NULL, exit 101
 */

int op_char(va_list ls)
{
	int len = 1;
	char p = va_arg(ls, int);
	if (!p)
		return (-1);

	_putchar(p);
	return (len);
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
	int bull = 0;
	int neg = 0;

	if (num >= 0 && num <= 9)
		_putchar(num + '0');
	if (num == -2147483648)
	{
		bull = 1;
		num = num / 10;
	}
	if (num < 0)
	{
		neg = 1;
		_putchar('-');
		num = -num;
	}
	if (num / 10)
		count += r_len(num);
	if (bull == 1)
		_putchar('8');
	if (neg == 0)
		return (count);
	if (neg == 1)
		return (count + 1);
	return (-1);
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
