#include "holberton.h"
/**
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("This is a char[%c]\n", 'A');
	len2 = printf("This is a char[%c]\n", 'A');
	len = 5;
	len2 = 7;
	_printf("len = [%d]\n", len);
	printf("len = [%d]\n", len);
	_printf("len2 = [%d]\n", len2);
	printf("len2 = [%d]\n", len2);
	return (0);
}
