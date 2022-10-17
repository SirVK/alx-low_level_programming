#include <stdio.h>
/**
 * main - prints first ten natural numbers
 * Return:Always 0 (success)
 */
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
	printf("%d", n);
}
getchar('\n');
return (0);
}
