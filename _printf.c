#include "holberton.h"

/**
 * _printf - prints a range of arguments it is given, given a format specifier.
 *
 * @format: a character string comprised of zero or more directives
 *
 * Return: number of chararcters printed (minus null byte)
 */

int _printf(const char *format, ...)
{
	unsigned int len = 0, rlen = 0;
	unsigned int itr;
	va_list ls;
	int (*f)(va_list);

	va_start(ls, format);
	if (format == NULL)
		return (-1);
	for (itr = 0; format != NULL && format[itr] != '\0'; itr++)
	{
		if (format[itr] != '%')
		{
			_putchar(format[itr]);
			len++;
		}
		if (format[itr] == '%')
		{
			while (format[itr + 1] == ' ')
				itr++;
			if (format[itr + 1] == '\0')
				return (-1);
			if (format[itr + 1] == '%')
			{
				_putchar('%');
				len++;
				itr++;
				continue;
			}
			f = func_select(format[itr + 1]);
			if (!f)
			{
				_putchar(format[itr]);
				_putchar(format[itr + 1]);
				len += 2;
			}
			else
			{
				rlen = f(ls);
				len = len + rlen;
			}
			++itr;
		}
	}
	va_end(ls);
	return (len);
}
