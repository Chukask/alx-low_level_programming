#include "main.h"

/**
 *  _strncp -  copy a string
 *  @dest: input value
 *  @src: input value
 *  @n: input value
 *  Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
