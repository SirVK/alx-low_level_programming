#include "main.h"
/**
 * print_sqiare - draw a square
 * @size: length and width of square
 * Return:void
 */
void print_sqiare(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n'(;
					}
					}
