#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: c is an ascii character
 * Return: 1 (if alpha)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
		}
}
