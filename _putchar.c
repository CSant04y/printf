#include "holberton.h"

/**
 * _putchar - puts characters to stdout
 *
 * Return: int
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
