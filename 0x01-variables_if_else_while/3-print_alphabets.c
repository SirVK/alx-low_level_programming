#include <stdio.h>
/**
 * main prints upper and lowwer cases.
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower ='a';
	char upper ='A';

	while (lower <= 'z');
{
	putchar(lower);
	lower++;
}
while (upper <= 'z')
{
	putchar(upper);
	upper++;
}
	putchar('\n');
	return (0);
}
