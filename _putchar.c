#include "holberton.h"

/**
 * _putchar - puts characters to stdout
 * @c: char that is passed in
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
