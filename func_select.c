#include "holberton.h"

/**
 * func_select - returns function pointer to selected function
 *
 * @ls: format list
 *
 * Return: function pointer
 * OR exit 98 and NULL if issue
 */

int (*func_select(char spec))(va_list)
{
	int idx = 0;
	op_t ops[] = {
		{'c', op_char},
		{'s', op_str},
		{'\0', NULL}
	};

	printf("spec: %c\n", spec);
	while (ops[idx].ptr)
	{
		if (ops[idx].ptr == spec)
		{
			return (ops[idx].func_ptr);
		}
		idx++;
	}

	exit(98);
	return (NULL);
}
