#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct types - struct
 * @id: identifier of type to print (e.g. c means char)
 * @func: ptr to functions that print according to identifier (e.g. print_c)
 */

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;

char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);

#endif 
