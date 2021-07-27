#include "holberton.h"
/**
 *_strlen - returns the number of characters in a string
 *@str: the string to find length
 *Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}
