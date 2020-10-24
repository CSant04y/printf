#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* HEADERS */

#include <stdlib.h>
#include <stdio.h>
#include <stdargs.h>

/* STRUCT */

typedef struct op
{
	char *ptr;
	int (*func_ptr)(va_list ls);
} op_t;

/* PROTOTYPES */

int _putchar(char c);

int _printf(const char *format, ...);

int op_str(va_list ls);

int op_char(va_list ls);

#endif /* _HOLBERTON_H_ */
