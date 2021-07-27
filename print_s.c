#include "holberton.h"
/**
 *print_s - take strings 
 *@list: string
 *Return: a string
 */

char *print_s(va_list list)
{
	char *s;
	char *p;
	int len;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p, s));
}
