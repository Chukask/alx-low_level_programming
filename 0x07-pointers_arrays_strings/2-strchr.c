#include "main.h"
#include <stddef.h>

/**
 *  _strchr _ Entry point
 *  @s: input
 *  @c: inpuer
 *  Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[1] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}

	return (NULL);
}
