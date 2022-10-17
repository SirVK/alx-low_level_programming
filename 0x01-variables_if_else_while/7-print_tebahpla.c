#include <stdio.h>
/**
 * main - prints rev alpha
 * Return:0,(success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
{
	putchar(alpha);
	alpha--;
}
putchar('\n');
return (0);
}

