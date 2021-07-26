#include "holberton.h"
/**
 *_strcpy - copies info
 *@dest: destination file
 *@src: source file
 *Return: array
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = src[x];
	return (dest);
}
