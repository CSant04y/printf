#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* HEADERS */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/* STRUCT */

typedef struct op
{
	char ptr;
	int (*func_ptr)(va_list ls);
} op_t;

/* PROTOTYPES */

int _putchar(char c);

int _printf(const char *format, ...);

int op_str(va_list ls);

int op_char(va_list ls);

int (*func_select(char ptr))(va_list ls);

int op_num(va_list ls);

int r_len(int n);

int op_num(va_list ls);
#endif /* _HOLBERTON_H_ */
