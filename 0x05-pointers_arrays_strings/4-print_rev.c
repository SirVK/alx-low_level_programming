#include "main.h"

/**
 * print_rev - prints in reverse order
 * @s:string
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--
	}
	_putchar('\n');
}
