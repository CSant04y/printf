# **printf**

printf is a function prints a formated string to the standard out. There are
specifiers that allow printf to take variables of varying types and pass
them into printf to be printed to stdout.

## *_printf.c*

\_printf.c contains the "main" \_printf function. It is a variadic 
function that takes in a list of arguments from the standard input.
Once the function receives the call, \_printf begins to put characters
from the input to the standard out until it reaches a format specifier,
at which point, it passes the arguments off to helper functions to correclty
identify and parse the input.

## *_putchar.c*

\_putchar.c writes charaters to the standard out with a write call.

## *func_select.c*

func\_select.c receives a list of type va\_list and uses the passed char
from the \_printf function to decide what variable type is being passed.
A struct and function pointers are used to pair the passed char with the
appropraite function.

`
	op_t ops[] = {
		{'c', op_char},
		{'s', op_str},
		{'d', op_num},
		{'i', op_num},
		{'\0', NULL}
	};
`

## *selected_func.c*

selected\_func.c contains multiple functions that the function pointer
from func\_select.c can return. These functions each take a different
variable type and put them to the stdout in place of the specifier.

## *holberton.h*

This is the header file that containes the libraries, function prototypes,
and struct creations for \_printf.
