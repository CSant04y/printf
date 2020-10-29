# **printf**

printf is a function prints a formated string to the standard out. There are
specifiers that allow printf to take variables of varying types and pass
them into printf to be printed to stdout.

```
int _printf(const char *format, ...);
```
The varadic prtotype above takes in a variable amount of arguments that range
from strings to integers.

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

```
op_t ops[] = {
	{'c', op_char},
	{'s', op_str},
	{'d', op_num},
	{'i', op_num},
	{'b', itob},
	{'r', revstr},
	{'R', rot13},
	{'\0', NULL}
};
```

## *selected_func.c*

selected\_func.c contains multiple functions that the function pointer
from func\_select.c can return. These functions each take a different
variable type and put them to the stdout in place of the specifier.

## *revstr.c*
This function takes in a string that that is given by _print.c and iterates
through the sting. It then finds the end of the string and traverses backwards
and prints each char while doing so.

## *rot13.c*
This takes in an encrypted or a string that need to be decrypted and either
encrypts it or decrypts it in rot13 format using a nested loop system.

## *binary.c*
This function takes in va_list and takes in an integer and makes that integer
into a binary number using divison and the modulus function which is done
recursivley to get an accurate length.


## *holberton.h*

This is the header file that containes the libraries, function prototypes,
and struct creations for \_printf.

## *Examples*

INPUT: 

```
int main(void)
{
	_printf("This is a %s of how _printf works%c\n", "example", '!');
	_printf("This prints the number %d in binary: %b\n", 50, 50);
	return (0);
}
```

OUTPUT:

```
This is a example of how _printf works!
This prints the number 50 in binary: 110010
```
