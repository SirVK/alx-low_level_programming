#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - changes number to 98
 * @n: pointer variable
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main - checks code
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
