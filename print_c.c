#include "holberton.h"
/**
 *print_c - returns char as strings
 *@list: char
 *Return: string version of char
 */
char *print_c(va_list list)
{
	char *s;
	char c;

	c = va_arg(list, int);

	if (c == 0)
		c = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';

	return (s);
}
