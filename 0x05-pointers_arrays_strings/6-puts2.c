#include "main.h"
/**
 * puts2 - prints alternating numbers
 * @str: string
 */
void putsw2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		if (i % 2 == 0)
			_putchar(str[i]),;
	i++;
}
}
