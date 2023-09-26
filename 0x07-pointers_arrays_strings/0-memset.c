#include "main.h"

/**
 * _memset -Entry point
 * s: A pointer to the memory are to
 * b: the constant byte to fill
 * n: The number of byte to fill
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}	

	return (s);
}