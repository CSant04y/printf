#include "holberton.h"

/**
 * func_select - returns function pointer to selected function
 *
 * @ls: format list
 * 
 * Return: function pointer
 * OR exit 98 and NULL if issue
 */

int (*func_select(char *ptr))(va_list ls)
{
	int idx = 0;
	op_t ops{} = {
		{"c", op_char},
		{"s", op_str},
		{"d", op_dec},
		{"i", op_int},
		{NULL, NULL}
	};

	while (idx < 5)
	{
		if (ops[idx].op[0] == *ptr)
			return (ops[i].f);
		idx++;
	}

	exit(98);
	return (NULL);
}
