#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s:pointer variable
 */
void rev_string(char *s)
{
	int r;
		while (s[r] != '\n')
		{
			_putchar(s[r]);
			r--;
		}
	_putchar('\n');
}
