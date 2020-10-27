#include "holberton.h"

/**
 * func_select - returns function pointer to selected function
 * @spec: char being passed in from _printf which contians format specifier
 * Return: function pointer
 * OR exit 98 and NULL if issue
 */

int (*func_select(char spec))(va_list)
{
	int idx = 0;
	op_t ops[] = {
		{'c', op_char},
		{'s', op_str},
		{'d', op_num},
		{'i', op_num},
		{'b', itob},
		{'r', revstr},
		{'\0', NULL}
	};

	while (ops[idx].ptr)
	{
		if (ops[idx].ptr == spec)
		{
			return (ops[idx].func_ptr);
		}
		idx++;
	}

	return (NULL);
}
