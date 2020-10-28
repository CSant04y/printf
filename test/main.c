#include "holberton.h"
/**
 *
 *
 *
 */
int main(void)
{
	int len, len2;

	len = _printf(NULL);
	len2 = printf(NULL);
	fflush(stdout);
	if (len != len2)
	{
		printf("1 Lengths differ.\n");
		fflush(stdout);

	}
/**/
	len = 0;
	len2 = 0;
	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	fflush(stdout);
	if (len != len2)
	{
		printf("2 Lengths differ.\n");
		fflush(stdout);

	}
/**/
	len = _printf("%");
	len2 = printf("%");
	fflush(stdout);
	if (len != len2)
	{
		printf("3 Lengths differ.\n");
		fflush(stdout);

	}
/**/
	len = 0;
	len2 = 0;
	len = _printf("%!\n");
	len2 = printf("%!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf(" 4 Lengths differ.\n");
		fflush(stdout);

	}
/**/
	len = 0;
	len2 = 0;
	len = _printf("%K\n");
	len2 = printf("%K\n");
	fflush(stdout);
	if (len != len2)
	{
		printf(" 5 Lengths differ.\n");
		fflush(stdout);

	}
	return (0);
}
