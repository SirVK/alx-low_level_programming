#include "main.h"

/**
 * _puts: prints the string
 * @str: The string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
		
