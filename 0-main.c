#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - entry point for the program
 *
 * Return: is 0
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("String:[%s]\n", "10 spooky skeletons");
	len2 = printf("String:[%s]\n", "10 spooky skeletons");

	/*printing the lengths of len1 and len2*/

	_printf("_printf print len1 is:[%d, %i]\n", len1, len1);
	printf("printf print len2 is: [%d, %i]\n", len2, len2);

	/*Testing for length of numbers*/

	len1 = _printf("print number: [%i]\n", 1500);
	len2 = printf("print number: [%i]\n", 1500);

	_printf("_printf dig len1: [%i]\n", len1);
	printf("printf dig len2: [%i]\n", len2);

	/*test for char*/

	len1 = _printf("Char:[%  c]\n", 'T');
	len2 = printf("Char:[%  c]\n", 'T');
	_printf("_printf char len:[%d]\n", len1);
	printf("printf char len:[%d]\n", len2);

	/*check for percent signs*/

	_printf ("Percent sign: [%%]\n");
	printf ("Percent sign: [%%]\n");
	_printf("percent with space: [%  %]\n");
	printf("percent with space: [%  %]\n");

	/*Edge cases*/

	_printf("\nEdge cases\n");
	_printf("_printf NULL string:[%s]\n", NULL);
	printf("printf NULL string: [%s]\n", NULL);
	_printf("_printf empty string: [%s]\n", "");
	printf("printf empty string: [%s]\n", "");
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("css%ccs%scscscs\n", 'T', "Test");
	printf("css%ccs%scscscs\n", 'T', "Test");

	return (0);
}
