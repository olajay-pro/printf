#include "holberton.h"

/**
 *_printf - function that produces output according to a format
 *@format: takes output
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j = 0, a = 0, *index = &a;
	va_list valist;
	vtype_t spec[] = {
		{'c', format_c}, {'d', format_d}, {'s', format_s}, {'i', format_d},
