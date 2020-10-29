#include "holberton.h"
/**
 *
 *
 *
 */
int main(void)
{
	int len, len2;

/**/
	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("0 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
	fflush(stdout);
	if (len != len2)
	{
		printf("1 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	fflush(stdout);
	if (len != len2)
	{
		printf("2 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	fflush(stdout);
	if (len != len2)
	{
		printf("3 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("4 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	fflush(stdout);
	if (len != len2)
	{
		printf("5 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	fflush(stdout);
	if (len != len2)
	{
		printf("6 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("7 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("%%");
	len2 = printf("%%");
	fflush(stdout);
	if (len != len2)
	{
		printf("8 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("Should print a single percent sign: %%\n");
	len2 = printf("Should print a single percent sign: %%\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("9 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	fflush(stdout);
	if (len != len2)
	{
		printf("10 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf("css%ccs%scscscs", 'T', "Test");
	len2 = printf("css%ccs%scscscs", 'T', "Test");
	fflush(stdout);
	if (len != len2)
	{
		printf("11 Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
/**/
	len = _printf(NULL);
	len2 = printf(NULL);
	fflush(stdout);
	if (len != len2)
	{
		printf("14 Lengths differ.\n");
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
		printf("15 Lengths differ.\n");
		fflush(stdout);

	}
/**/
	len = _printf("%");
	len2 = printf("%");
	fflush(stdout);
	if (len != len2)
	{
		printf("16 Lengths differ.\n");
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
		printf("17 Lengths differ.\n");
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
		printf("18 Lengths differ.\n");
		fflush(stdout);

	}
	return (0);
}
