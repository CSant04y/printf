#include "holberton.h"

/**
 * _printf - prints a range of arguments it is given, given a format specifier
 *
 * @format: a character string comprised of zero or more directives
 *
 * Return: number of chararcters printed (minus null byte)
 */

int _printf(const char *format, ...)
{
	unsigned int len = 0;
	unsigned int itr;
	va_list ls;
	int (*f)(va_list ls);

	va_start(ls, format);
	/** We are checking to see if format is NULL as well as if fomat of itr
	 *  is equalto the null terminating byte */
	for (itr = 0; format != NULL && format[itr] != '\0'; itr++)
	{
		if (format[itr] != '%')
		{
			_putchar(format[itr]);
			len++;
		}
		if (format[itr] == '%' && *(format + 1) == '%')
		{
				_putchar('%');
				len++;
		}
		else
		{
			f = func_select(va_list ls);
		}
	}

}
