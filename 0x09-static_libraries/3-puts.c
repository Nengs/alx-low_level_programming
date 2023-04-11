#include "main.h"

/**
* _puts - prints a string followed by a newline to stdout
* @str: pointer to the string to be printed
*
*/
void _puts(char *str)
{
	/* loop through the string and print each character */
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	/* add a newline character at the end */
	_putchar('\n');
}
