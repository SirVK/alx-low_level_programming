#include "main.h"
#include <stdio.h>
/**
 * _strlen - prints the size of a string
 * @s: pionter to string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;
	
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
