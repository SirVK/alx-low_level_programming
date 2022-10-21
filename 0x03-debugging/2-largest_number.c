#include "main.h"
/**
 * main - prints the largest of three numbers
 * @a: first number
 * @b: second number
 * @c: thirs number
 * Return:largest of the numbers
 */

int laegest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest =b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
