#include "main.h"
/**
 *  _strcop - compare string values
 *  @s1: input value
 *  @s2: input value
 *  Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; s1[i] !=  '\0' && b == 0; i++)
	{
		{
			b =  (s1[i] - s2[i]);
		}
	}
	return (0);
}
