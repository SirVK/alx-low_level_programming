#include "main.h"
/**
 * check if number is 0-9
 * @c:input integer
 * Return:1 if a number(0-9), 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
