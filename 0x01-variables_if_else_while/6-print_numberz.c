#include <stdio.h>
/**
 * main - prints numbers
 * Return:Always 0 (success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
{
	putchar(n);
	n++;
}
putchar('\n');
return (0);
}
