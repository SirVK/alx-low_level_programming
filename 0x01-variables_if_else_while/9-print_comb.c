#include <stdio.h>
/**
 * main - prints input
 * Return:0 (success)
 */
int main(void)
{
	int n;

	for (n = 40; n < 50; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
