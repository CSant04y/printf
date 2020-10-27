#include "holberton.h"
/**
 * itob - this makes int into binary
 * @ls: va_list
 * Return: 1 if passed -1 for fail
 */
int itob(va_list ls)
{
	int len = 0;
	int num = va_arg(ls, int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len += ihelp(num);
	return (len);
}
/**
 * ihelp - recursive function that returns the length of the binary
 * as well as dividing n by 2 to get either 1 or 0
 * @n: number being passed in from itob
 * Return: is len
 */
int ihelp(int n)
{
	int len1 = 1;

	if (!n)
		return (-1);

	if (n >= 1)
	{
		if (n > 1)
			len1 = 1 + ihelp(n / 2);
		_putchar((n % 2) + '0');
	}
	return (len1);
}
