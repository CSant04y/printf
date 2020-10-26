#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int len3, len4;	
	int k;
/* Testing lengths to make sure they match*/	
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'g');
	_printf("Length:[%d, %d]\n", len, len);
	_printf("Length:[%d, %i]\n", len, len);
	_printf("[%d, %d]\n", len, len2);
	printf("Length:[%d, %i]\n", len2, len2);
        /*testing for length of numbers*/
	len = _printf("[%d]\n", -500);
        len2 = printf("[%d]\n", -500);
        len3 = _printf("[%d]\n", 500);
        len4 = printf("[%d]\n", 500);
/*this is printing the lens from above*/
	_printf("[(-_)1: %d, (-)2: %i, (+_)3: %d, (+)4: %d]\n",len, len2, len3, len4);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%  s]\n", "I am a string !");
	printf("String:[%  s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
/*testing to see if negative numbers print out*/
	_printf("[%d]\n", -123454);
	printf("[%d]\n", -123454);
	len = _printf("[%d]\n", -123454);
	len2 = printf("[%d]\n", -123454);
/*testing spaces between format modifiers*/
	_printf("[%     d, %d]\n", len, len2);
	printf("[% s]\n", "bob");
	_printf("[%s]\n", NULL);
	_printf("[%s]\n", "");
/*testing lengths of strings*/
	k = _printf("[I am not happy! %s]\n", "yes I am");
	_printf("length:[%d]\n", k);
	k = _printf("[%d]\n", 50);
	printf("length:[%d]\n", k);
	
	return (0);
}
