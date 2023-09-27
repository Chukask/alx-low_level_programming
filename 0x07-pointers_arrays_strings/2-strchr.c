#include "main.h"
#include <stddef.h>

/**
 *  _strchr -  Entry point pointer to the first occurrence of the character
 *  @s: input
 *  @c: inpuer
 *  Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
